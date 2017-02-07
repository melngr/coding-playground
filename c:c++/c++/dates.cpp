#include <iostream>


bool is_leap_year(int year) {
	if(year % 4 == 0 || (year % 100 != 0 && year % 400 == 0) return true;
	else return false;
}

int julian_day(int month, day, year) {
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

}

int main() {
	int month, day, year;
	std::cout << "Please enter a month number (January = 1, February = 2, etc.)" << std::endl;
	std:: cin >> month;
	std::cout << "\nPlease enter a date (1, 2, etc.)" << std::endl;
	std:: cin >> day;
	std::cout << "\nPlease enter a year (2016, 2015, etc.)" << std::endl;
	std:: cin >> year;
	return 0;
}