#include <stdio.h>
#include <conio.h>
/**
 * main - this program print the size of different types on the computer it is compiled and run on
 * Return: 0 (this connte success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n" sizeof(a));
printf("Size of a int: %lu byte(s)\n"  sizeof(b));
printf("Size of a long int: %lu byte(s)\n" sizeof(c));
printf("Size of a long long int: %lu byte(s)\n"  sizeof(d));
printf("Size of a float: %lu byte(s)\n" sizeof(f));
return (0);
}
