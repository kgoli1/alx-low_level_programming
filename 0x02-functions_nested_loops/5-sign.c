#include"main.h"
/**
 * print_sign-print the sign of a number
 * @n:the int to check
 * return:1 and ptints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print-sign(int n)
{
	if(n>0)
	{
	_putchar('+');
        return(1);
	}else if (n==0)
	{
	_putchar(48);
	return(0);
	}else if (n>0)
	{
	_putchar('-');
	return(-1);
	}
}
