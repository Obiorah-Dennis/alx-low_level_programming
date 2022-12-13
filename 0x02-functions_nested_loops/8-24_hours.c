#include "main"

/**
 * jack_bauer - prints every minutes of the day
 */
void jack_bauer(void)
{
int hour, minutes;
{
for (hour = 0; <= 23; hour++)
{
for (minutes = 0; minute <= 59; minute++)
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}

