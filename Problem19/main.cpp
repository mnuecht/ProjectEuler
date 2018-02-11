#include <stdlib.h>
#include <stdio.h>
using namespace std;

enum day {
	SUNDAY = 0,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

int get_days_in_month(int month, int year) {
	switch (month) {
		case 2:
			if (year % 4 == 0) {
				if (year % 100 == 0 && year % 400 != 0) {
					return 28;
				}
				return 29;
			}
			return 28;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		default:
			return 31;
	}
}

int count(day day_search, day start_day, int start_month, int start_year, int end_year) {
	int count = 0;
	int day = start_day;
	for (int year = start_year; year <= end_year; ++year) {
		int month = (year == start_year) ? start_month : 1;
		for (; month <= 12; ++month) {
			printf("First day of %i %i = %i\n", month, year, day);
			if (day == day_search) {
				printf("match for %i %i\n", month, year);
				++count;
			}
			day = (day + get_days_in_month(month, year)) % 7;
		}
	}
	return count;
}

int main() {
	printf("count = %i\n", count(SUNDAY, MONDAY, 1, 1900, 2000) - count(SUNDAY, MONDAY, 1, 1900, 1900));
}
