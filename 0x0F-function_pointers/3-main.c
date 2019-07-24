#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result;
	int (*ptr) (int, int);
	
	if (argc != 4)
		return (__RETURN__(98));

	if (atoi(argv[3]) == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		return (__RETURN__(99));

	ptr = get_op_func(argv[2]);
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}