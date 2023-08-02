#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: the number
 * Return: 0 successful
 */

int factorial(int n)

{
	int result = 1;
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		for (x = 1; x <= n; ++x)
		{
			result *= x;
		}
	}
	return (result);
}
