#include "main.h"
/**
 * Description :print_alphabet - utilizes on the _putchar function to print a
 *
 * Return: Always 0 (Success)
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <=  'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
