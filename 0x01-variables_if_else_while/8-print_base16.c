#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
int letter;
for (letter = '0'; letter <= '9'; letter++)
{
putchar(letter);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
