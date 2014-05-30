#include <stdio.h>

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};

//day of year
int  day_of_year(int year, int month, int day)
{
	int i, leap;
	if (month > 12 || day > 31 || month == 0 || day == 0) {
		printf("invalid date or month\n");
		return -1;		
	}
	else {
		leap = ((year%4 == 0) && (year%100 != 0) || (year%400 == 0));
		for (i = 1;i < month;i++)
			day += daytab[leap][i];
		return day;
	}
}
//month day
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	if (yearday > 0 && yearday < 366 && year > 0){
		leap = ((year%4 == 0) && (year%100 != 0) || (year%400 == 0));
		for (i = 1;yearday > daytab[leap][i];i++)
			yearday -= daytab[leap][i];
		*pmonth = i;
		*pday = yearday;
	}
	else
		printf("invalid yearday!!\n");
		*pmonth = -1;
		*pday = -1;	
}

main()
{
	int day, month, year;
	day = day_of_year(2000,0,23);
	printf("the day in year : %d\n",day);
	printf("**************************\n");
	month_day(1990,367,&month,&year);
	printf("month :%d,date : %d\n",month, year);
	return 0;
}

















