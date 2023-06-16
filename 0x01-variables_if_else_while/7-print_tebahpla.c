#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
char x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
