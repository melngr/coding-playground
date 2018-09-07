'''
    :author:    Griffin Melnick, melnick DOT griffin AT gmail DOT com
    :file:      field-finder.py
    :purpose:   Designed to be placed in the 'report' directory of retrieved
                    Salesforce metadata to parse each report to build a list of
                    all fields used.
'''

import os
import re

class Field:
    def __init__( self, object_name, field_name ):
        self._obj = object_name
        self._f = field_name


if ( __name__ == "__main__" ):
    out = open( 'used-fields.txt', 'w+' )
    file_pattern = re.compile( '^\w+[.](report)$' )
    field_pattern = re.compile( '^(<field>)\\w+[.]\\w+(<\/field>)$' )

    for subdir, dirs, files in os.walk('.'):
        for file in files:
            print(file)
            #if ( file_pattern.match( file.split('/')[ len( file.split('/') ) + 1 ] ) ):
            #    f = open( file, 'r' )
            #    for line in f.readlines():
            #        print( line.strip() )
