#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print 
 * the alphabet a <F4> z 
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <=  'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}