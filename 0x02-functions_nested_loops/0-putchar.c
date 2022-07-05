/*
* File: 1-alphabet.c
* Auth:Keku
*/
#include "main.h"

/**
*
* print_alphabet - show the Alphabet in lowercase, followed by a new line.
*/
void print_alphabet(void)
{
char alpha;

for (alpha = 97; alpha <= 122; alpha++)
_putchar(alpha);
_putchar('\n');
}
