#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print last digit
 *
 *Return: Always 0
 */
int main(void)
{
int n;
int lastDigit;
char *info;
srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;
if (lastDigit > 5)
{
info = "and is greater than 5";
}
else if (lastDigit == 0)
{info = "and is 0";
}
else if (lastDigit < 6 && lastDigit != 0)
{
info = "and is less than 6 and not 0";
}
printf("Last digit of %d is %d %s\n", n, lastDigit, info);
return (0);
}
