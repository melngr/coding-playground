from collections import defaultdict

class Registers:
    def __init__(self):
        self.regs = defaultdict(int)

    def set(self, key, val):
        try:
            self.regs[key] = int( val )
        except ValueError:
            raise ValueError( "Illegal letter assignment as register value." )

    def get(self, val):
        try:
            return int( val )
        except ValueError:
            return self.regs[val]

    def __str__(self):
        str_rep = ""
        for key in sorted( self.regs.keys() ):
            str_rep += "{0}: {1}\n".format( key, self.regs[key] )

        return str_rep[ :-1 ]

if __name__ == "__main__":
    r = Registers()
    r.set('a', 1)
    r.set('b', 2)
    r.set('c', 3)

    print( r.get('a') )
    print( r.get('c') )
    print( r.get('e') )

    print( str(r) )
