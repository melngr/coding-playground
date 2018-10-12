/* monty-hall.c
 * Griffin Melnick, melnick DOT griffin AT gmail DOT com
 */

#include <sodium.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    uint32_t _id;
    bool _hasPrize;
} Door;

typedef struct {
    Door * _doors;
    uint32_t _winner;
} Game;

#define NUM_ROUNDS 1000000

float wins = 0;


/* -------------------------------------------------------------------------- */

void initRound( Game * gPtr ) {
    (*gPtr)._winner = randombytes_uniform(3) + 1;
    for ( int i = 1; i <= 3; ++i ) {
        if ( i != (*gPtr)._winner ) {
            (*gPtr)._doors[i] = (Door){ ._id = i, ._hasPrize = false };
        } else {
            (*gPtr)._doors[i] = (Door){ ._id = i, ._hasPrize = true };
        }
    }
}


void printGame( Game * gPtr ) {
    printf( "   " );
    for ( int i = 1; i <= 3; ++i ) {
        if ( i < 3 ) {
            printf( " door %d: %s;", i, (*gPtr)._doors[i]._hasPrize ? "true" : "false" );
        } else {
            printf( " door %d: %s\n", i, (*gPtr)._doors[i]._hasPrize ? "true" : "false" );
        }
    }
    fflush( stdout );
}


bool winOnSwitch( Game * gPtr, uint32_t picked ) {
    bool win = false;

    /* If we didn't pick the winning door, we know switching will be an 
     * automatic win.
     */
    if ( picked != (*gPtr)._winner ) {
        win = (*gPtr)._doors[ (*gPtr)._winner ]._hasPrize;
    } else {
        uint32_t * tmp = malloc( sizeof(uint32_t) * 2 );
        if ( (*gPtr)._winner == 1 ) { tmp[0] = 2;  tmp[1] = 3; }
        if ( (*gPtr)._winner == 2 ) { tmp[0] = 1;  tmp[1] = 3; }
        if ( (*gPtr)._winner == 3 ) { tmp[0] = 1;  tmp[1] = 2; }

        uint32_t notDropped = tmp[ randombytes_uniform(2) ];
        win = (*gPtr)._doors[notDropped]._hasPrize;
    }

    return win;
}


/* -------------------------------------------------------------------------- */

int main() {

    /* Check if sodium loads properly. */
    if ( sodium_init() != -1 ) {
        Game * demo = malloc( sizeof(Game) );
        (*demo)._doors = malloc( sizeof(Door) * 3 );

#ifdef SWITCH
            printf( "Running Monty Hall problem where always switch simulation %d times...\n", NUM_ROUNDS );
#endif
#ifndef SWITCH
            printf( "Running Monty Hall problem where never switch simulation %d times...\n", NUM_ROUNDS );
#endif
        fflush( stdout );
        for ( int i = 1; i <= NUM_ROUNDS; ++i ) {
            initRound( demo );
#ifdef DEBUG_MODE
            printf( "    round %d -- ", i );
            fflush( stdout );
            printGame( demo );
#endif
            uint32_t picked = randombytes_uniform(3) + 1;
#ifdef SWITCH
            if ( winOnSwitch( demo, picked ) ) { ++wins; }
#endif
#ifndef SWITCH
            if ( (*demo)._doors[picked]._hasPrize ) { ++wins; }
#endif
        }
        printf( "  done with %d wins, percentage %.2f%%\n", (int) wins, (wins / NUM_ROUNDS * 100) );

        free( (*demo)._doors );                 (*demo)._doors = NULL;
        free( demo );                           demo = NULL;
        return EXIT_SUCCESS;
    } else {
        fprintf( stderr, "ERROR: libsodium did not load properly.\n" );
        return EXIT_FAILURE;
    }

    /* We should never get here. */
    return EXIT_FAILURE;

}
