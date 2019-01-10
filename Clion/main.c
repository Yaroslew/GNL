#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("/Users/pcorlys-/GNL/Clion/test", O_RDONLY);
	char *res;
	int cout;

res = NULL;
	cout = get_next_line(fd, &res);
	printf("res=%d", cout);
	return (0);
}