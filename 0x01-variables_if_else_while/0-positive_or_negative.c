#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers here*/

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main here */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n)i;
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
