/*
*File: alphabet ten times
*Auth: Keku
*/
#include "main.h"

/**
*print_alphabet_x10 - display alphabet 10 times, in lowercase.
*/
void print_alphabet_x10(void)
{
int coun = 0;
char alpha;

while (coun++ <= 9)
{
for (alpha = 97; alpha <= 122; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
