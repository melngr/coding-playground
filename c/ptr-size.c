/* ptr-size.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int x = 4;
    int * y = malloc( sizeof( int ) );
    *y = x;

    int * z = malloc( sizeof( int ) * 16 );
    for ( int i = 0; i < 17; ++i ) {
        *( z + ( i * sizeof( int ) ) ) = i;
    }

    printf( "sizeof( x ) = %d\n", (int)( sizeof( x ) ) );
    printf( "sizeof( y ) = %d\n", (int)( sizeof( y ) ) );
    printf( "sizeof( z ) = %d\n", (int)( sizeof( z ) ) );

    for ( int i = 0; i < 17; ++i ) {
        printf( "z[%d] = %d\n", i, *( z + ( i * sizeof( int ) ) ) );
    }
#if 0
    printf( "\n\n" );

    z = realloc( z, 32 );
#endif
    
    return EXIT_SUCCESS;
}
