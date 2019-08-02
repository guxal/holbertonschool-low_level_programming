#include <stdio.h>
/**
 * before_main - before main
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n \
			I bore my house upon my back!\n");
}
