#include <stdio.h>

static char daytab[][13] = {
			{0,31,28,31,30,31,30,31,31,30,31,30,31},
			{0,31,29,31,30,31,30,31,31,30,31,30,31}
			};

//day of year

int day_of_year(int year, int month, int day)
{
	int i, leap;
	char *p;
	leap = ((year%4 == 0) &&(year%100 != 0) || (year%400 == 0));
	p = daytab[leap];
	while (--month)
		day += (*++p);
	return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int leap;
	char *p;
	char *i;
	leap = ((year%4 == 0) && (year%100 != 0) || (year%400 == 0));
	p = daytab[leap];
	i = p;
	
	
	while (yearday > *++p)
		yearday -= (*p);
	*pmonth = (p - *(daytab+leap));
	*pday = yearday;

}


main()
{
	int day, month, year;
	day = day_of_year(2001,3,6);
	printf("%d\n",day);
	month_day(2001,65,&month,&year);
	printf("%d, %d\n",month,year);
	return 0;
}
