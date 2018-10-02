if __name__ == "__main__":
    f = open( "tmp.txt", 'r' )
    tmp = f.readlines()
    print( len(tmp) == len(set(tmp)) )
    print( len(tmp), len(set(tmp)) )
    for l in tmp:
        print( l )
    f.close()
