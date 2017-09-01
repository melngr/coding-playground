import re

if ( __name__ == "__main__" ):

    string = "The quick@)#(* brown fox *)&)(*jumped over the *)(**&^(*&)) lazy dog."

    regex = re.compile( "[^a-zA-Z ]" )
    print( string )
    print( regex.sub('', string.lower()) )

