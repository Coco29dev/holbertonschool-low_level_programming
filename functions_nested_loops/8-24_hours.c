#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: This function displays every minute of the day,
 * starting at 00:00 and ending at 23:59, in the format HH:MM.
 */

void jack_bauer(void)
{
int heure = 0;
int minute = 0;
for (heure = 0; heure < 24; heure++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar(heure / 10 + '0');
_putchar(heure % 10 + '0');
_putchar(':');
_putchar(minute / 10 + '0');
_putchar(minute % 10 + '0');
_putchar('\n');
}
}
}
