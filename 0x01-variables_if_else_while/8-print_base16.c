#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
int x = '0';
int y = 'a';
while (x <= '9') /*print 0-9*/
{
putchar(x);
x++;
}
while (y <= 'f') /*print a-f to finish hexbase*/
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
