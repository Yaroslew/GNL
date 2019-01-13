#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("/Users/pcorlys-/GNL/Clion/gnl1_3.txt", O_RDONLY);
	int fd2 = open("/Users/pcorlys-/GNL/Clion/test2", O_RDONLY);
	char *res;
	int cout;

	/*
res = NULL;

	cout = get_next_line(fd, &res);
	printf("code: %d, string:%s+ \n", cout, res);

	cout = get_next_line(fd, &res);
	printf("code: %d, string: %s\n", cout, res);

	cout = get_next_line(fd, &res);
	printf("code: %d, string: %s\n", cout, res);

	cout = get_next_line(fd, &res);
	printf("code: %d, string: %s\n", cout, res);

	cout = get_next_line(fd, &res);
	printf("code: %d, string: %s\n", cout, res);

	cout = get_next_line(fd, &res);
	printf("code: %d, string: %s\n", cout, res);

	 */

	while (get_next_line(fd, &res))
	{
		printf("%s\n", res);
	}

	return (0);
}

