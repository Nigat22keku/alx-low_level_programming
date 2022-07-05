#include "main.h"
/**
*@c: The character to be checked.
* Return: 1 if character is lowercase, o otherwise.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
