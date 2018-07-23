/* sprintf.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char buffer[16];
    for ( int i = 0; i < 15; ++i ) {
        sprintf( buffer, "%d", i );
    }

    printf( "char buffer[16] becomes: %s\n", buffer );
    
    return EXIT_SUCCESS;
}
