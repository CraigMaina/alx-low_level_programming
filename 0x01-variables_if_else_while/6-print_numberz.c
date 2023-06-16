#include <stdio.h>

/**
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
int x = '0';
while (x <= '9')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
