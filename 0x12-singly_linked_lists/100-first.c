#include <stdio.h>

/**
 * first - print the first statement befor the main
 * let the function be complied
 *
 */
void first(void)__attribute__((constructor));
void first(void)
{
	printf("You're best! and yet you must allow,\n");
	printf("I bored my house upon my back!\n");
}
