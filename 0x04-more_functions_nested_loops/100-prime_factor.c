#include "main.h"
#include <stdio.h>

long long largestPrimeFactor(long long number)
{
long long i;
while (number % 2 == 0)
{
number /= 2;
}
for (i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
number /= i;
}
}
if (number > 2)
{
return (number);
}

return (-1);
}
