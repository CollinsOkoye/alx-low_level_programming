#include "main.h"



/**
 *print_number - prints an integer.
 * @n: input integer.
 *Return: no return.
 **/

void print_number(int n)

{

	unsigned int m, d, count;

	if (n < 0)

	{
		_putchar(45);
		m = n * -1;

	}
	else

	{
		m = n;
	}

	d = m;

	count = 1;

	while (d > 9)

	{

		d /= 10;
		count *= 10;

	}


	for (; count >= 1; count /= 10)

	{
		_putchar(((m / count) % 10) + 48);

	}

}



Content of main.h



main.h



#ifndef _MAIN_H_

#define _MAIN_H_



int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

int _putchar(char);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);



#endif
