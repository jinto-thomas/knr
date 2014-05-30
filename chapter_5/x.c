#include <stdio.h>

main()
{
	static char name[][3] = {{1,2,3},{4,5,6}};

	printf("%u\n",**name);
}
