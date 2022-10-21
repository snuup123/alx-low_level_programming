#include "main.h"

/**
*_isdigit - function that checks for a digit or not
*@c: The input character
*Return: 1 if is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= 99)
	return (1);
else
	return (0);

}
