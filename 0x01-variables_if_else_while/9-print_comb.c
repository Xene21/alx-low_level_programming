#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
int let;
for (let = '0'; let <= '9'; let++)
{
putchar(let);
if (let != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
