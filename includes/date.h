#ifndef DATE_H
#define DATE_H

struct date {
	unsigned short int day;	 // the day number;
	unsigned short int month; // the month number;
	int year; 		 				 // the year;
};
typedef struct date date_t;

/** Function that check if an year is bissextile.
  *
	* @param int The year value.
	* @returns true if the year is bissextile, false otherwise.
  **/
bool isbissextile(int an);

/** Function that allows to check if the number
  * of month's days is equal to 31, or not.
	*
	* @param int The month's number between 1 and 12.
	* @return true if the number of month's days is equal to 31,
	*        	false otherwise.
  **/
bool month_counts_31days(short int mon);

/** Function to verify the date validity.
  * 
	* @param date_t The date you want to check.
  * @return True if the date is valid, false otherwise.
  */
bool is_valid_date(date_t* const date);

/** Function that allows to get the date of next day.
  * 
	* @param date_t  The date of current days.
	* @return the date of the next day's date.
  */
date_t get_next_date(date_t* const current_date);


#endif
