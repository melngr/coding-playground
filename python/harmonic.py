'''
:author: Griffin Melnick, melnick.griffin@gmail.com
:file: harmonic.py
:purpose: Used in RPI's Intro to Open Source CSCI 2963 test 2.
'''

import sys

# ----------------------------------------------------------------

def harmonic(n):
    hn = 0
    for i in range(1, (n + 1)):
        hn += (1 / i)
    return hn

# ----------------------------------------------------------------

if ( __name__ == "__main__" ):
    if ( len(sys.argv) == 2 ):
        n = sys.argv[1]
        if ( n.isdigit() ):
            n = int(n)
            harm_n = harmonic(n)
            print( "The harmonic number of {} is {}.".format( n, harm_n ) )

        else:
            print( "USAGE: input must be of type int" )

    else:
        if ( len(sys.argv) < 2 ):
            print( "USAGE: too few args" )
        else:
            print( "USAGE: too many args" )
