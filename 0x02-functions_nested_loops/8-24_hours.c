#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
for (int hours = 0; hours < 24; hours++)
{
for (int minutes = 0; minutes < 60; minutes++)
{
printf("%02d:%02d\n", hours, minutes);
}
}
}
