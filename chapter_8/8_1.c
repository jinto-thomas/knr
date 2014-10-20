//cat using read write close

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define MAX 1024

int main(int argc, char **argv)
{
	int fd, n;
	char buf[MAX];

	if (argc == 1) {
		while ((n = read(0,buf,MAX)) > 0)
			write(1,buf,n);
	}
	else {
		while (--argc) {
			fd = open(*++argv,O_RDONLY,0666);
			while ((n = read(fd,buf,MAX)) > 0)
				write(1,buf,n);
			close(fd);
		}
	}
	return 0;
}


