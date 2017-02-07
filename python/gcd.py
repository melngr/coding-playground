def r_gcd(x, y):
    if (y == 0): return x
    else: return r_gcd(y, (x % y))
    
def inv_mod():
    for i in range(250):
        print("i: {} ; mod: {}".format(i, ((8*i)%15)))


# --------------------------------------------------------------------------------


if __name__ == "__main__":
    # x, y = (2**125), 127
    # x, y = int(input("Enter a 'x' value => ")), int(input("Enter a 'y' value => "))
    # print("\nThe GCD of {} and {} is {}.\n".format(x, y, r_gcd(x, y)))
    inv_mod()