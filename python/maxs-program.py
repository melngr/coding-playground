months = [ "", "January", "February", "March", "April", "May", "June", "July", \
            "August", "September", "October", "November", "December" ]

if ( __name__ == "__main__" ):

    birth_month = input("Enter the number of the month you were born => ")
    birth_day = input("Enter the number of the day you were born => ")
    birth_year = input("Enter the number of the year you were born => ")

    try:
        b_month = int( birth_month )
        b_day = int( birth_day )
        b_year = int( birth_year )
    except ValueError:
        raise RuntimeError( "Month, day, and/or year not represented numerically." )

    print( "\nYour birthday is " + months[b_month] + " " + str(b_day) + ", " + \
            str(b_year) + "." )

    t_month = 10
    t_day = 8
    t_year = 2017

    days = (t_year-b_year)*365 + (t_month-b_month)*30 + (t_day-b_day)
    print( "You've been alive for " + str(days) + " days." )
