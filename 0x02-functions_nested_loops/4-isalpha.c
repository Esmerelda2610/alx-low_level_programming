#include "main.h"
/**
* _isalpha - check if char is lowercase or uppercase
* @c: is the char to be checked
* Return: 1 if char is lowercase or uppercase, otherwise 0.
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
