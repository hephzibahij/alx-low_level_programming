#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - print the first statement before the main
 * let the function be complied
 *
 */
void first(void)
{
	printf("You're beat! and yet you must allow,\n");
	printf("I bored my house upon my back!\n");
}
