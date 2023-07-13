#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("the size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("the size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("the size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("the size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("the size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
