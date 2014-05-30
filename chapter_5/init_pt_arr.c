#include <stdio.h>
//month name

char *month_name(int n)
{
	static char *name[] = {
		"invalid","jan","feb","mar","apr","may",
		"jun","jul","aug","sep","oct","nov","dec"
		};
	return (n < 1 || n > 12) ? name[0]:name[n];
}

main()
{
	printf("%s\n",month_name(3));
	return 0;
}
