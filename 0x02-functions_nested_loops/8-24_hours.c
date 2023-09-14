#include "main.h"
#include <stdio.h>

/**
* jack_bauer - print the 24 hours
*/

void jack_bauer(void)
{
int hr;
int min;

for (hr = 0 ; hr <= 24 ; hr++)
{
for (min = 0 ; min <= 59 ; min++)
{
putchar((hr / 10) + '0');
putchar((hr % 10) + '0');
putchar(':');
putchar((min / 10) + '0');
putchar((min % 10) + '0');
putchar('\n');
}
}
}

