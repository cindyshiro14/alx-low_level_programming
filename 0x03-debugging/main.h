#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* 0. Positive or Negative - Prints if an integer is positive or negative */
void positive_or_negative(int i);

/* 1. Main (Infinite Loop) - Commented out to avoid infinite loop */
/* int main(void); */

/* 2. Largest Number - Returns the largest of three numbers */
int largest_number(int a, int b, int c);

/* 3. Leap Year - Converts day of month to day of year and determines
 * how many days are left in the year, taking leap years into account */
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
