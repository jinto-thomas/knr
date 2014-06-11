#include <stdio.h>

static char *me[][15] = {"you sold out",
			 "manchester",
			 "chelseA"};
//int i = 0;
main()
{
	printf("1.%s\n",**me);
//	printf("2.%u\n3.%u\n",*me++,me);
//	printf("4.%u\n",++*me);	
	return 0;
}
