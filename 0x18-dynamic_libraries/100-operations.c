#include "main.h"

/**
 * add - add two numbers
 *@a: first value of the number
 *@b: second value of the number
 *
 * Return: 0 is success
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substract two numbers
 *@a: first value of the number
 *@b: second value of the number
 *
 * Return: 0 is success
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 *@a: first value of the number
 *@b: second of the value number
 *
 * Return: 0 is success
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide the two digit
 *@a: first value of any number
 *@b: second value of any number
 *
 * Return: 0 is success
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

/**
 * mol - modules two digits
 *@a: first digits
 *@b: second digits
 *
 * Return: 0 is success
 */
int mol(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}
