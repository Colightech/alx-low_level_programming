#include <stdio.h>

void chris(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void chris(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
