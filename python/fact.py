## This function is the iterative implementation of a factorial.
def i_fact(n):
    fact = 1
    for i in range(1, (n + 1)):
        fact *= i
    return fact

# ----------------------------------------------------------------

## This function is the recursive implementation of a factorial.
def r_fact(n):
    if (n == 0) or (n == 1):
        return 1
    else:
        return (n * (r_fact(n - 1)))


# ----------------------------------------------------------------


if __name__ == "__main__":
    n = int(input("Enter a number to take the factorial of => "))
    if (n < 0):
        print("Sorry, there is no factorial for a negative number.")
    else:
        print("The factorial of {0} is {1}.\n".format(n, i_fact(n)))
