#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
int x = '0';
while (x <= '9')
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
