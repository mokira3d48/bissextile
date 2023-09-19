#include "date.h"


bool isbissextile(int an) {
 /** The number of days contained in February month never exceeds 29.
			Or If the year is bissextile, the February has a maximum of 29 days.
			else it has a maximum of 28 days. */
	return ((an % 400 == 0)
	        || ((an % 4 == 0) && (an % 100 != 0)));
}


bool month_counts_31days(short int mon) {
	/** Except for February, Month whose number is less than
			or equal to 7, counts 31 days if their number is odd,
			it counts 30 otherwise.

			For those whose number is strictly greater than 7, counts
	    counts 31 days if their number is even, it counts 30 otherwise. */
	return ((mon <= 7 && mon % 2 != 0) || (mon > 7 && mon % 2 == 0));
}

unsigned short int get_max_value_of_day(date_t* const date) {
	if (date->month != 2)
		return month_counts_31days(date->month)? 31: 30;
	else
		return isbissextile(date->year)? 29: 28;
}


bool is_valid_date(date_t* const date) {
	// short unsigned int max_days;
	unsigned short int max_value;

	// Check: if day's number is equal to 0 or strictly greater than 31
	//        or the month's number is equal to 0 is strictly greater than 12.
	if (date->day == 0 || date->day > 31 || date->month == 0 || date->month > 12)
		return false;

	return (date->day <= get_max_value_of_day(date));
}


date_t get_next_date(date_t* const current_date) {
	date_t next_date = {
		current_date->day,
		current_date->month,
		current_date->year
	};
	unsigned short int max_value = get_max_value_of_day(current_date);

	next_date.day = (current_date->day + 1) % max_value;
	if (next_date.day == 1) {
		next_date.month = (current_date->month + 1) % 12;
		if (next_date.month == 1)
			next_date.year = current_date->year + 1;
	}

	return next_date;
}
