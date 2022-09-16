#include "main.h"
<<<<<<< HEAD

















 *jack_bauer -prints every minute of the day
 *
 *
 *Return: Always 0.
 */



void jack_bauer(void)



{

		int a;

			int b;



				for (a = 0; a <= 23; a++)

						{

									for (b = 0; b <= 59; b++)

												{

																_putchar (a / 10 + '0');

																			_putchar (a % 10 + '0');

																						_putchar (':');

																									_putchar (b / 10 + '0');

																												_putchar (b % 10 + '0');

																															_putchar ('\n');



																																	}





										}



=======
#include <stdio.h>


/**
 * add -prints add two numbers
 * @i: print int i
 * @k: print int k
 * Return: Always 0.
 */

int add(int i, int k)
{
	return (i + k);
>>>>>>> 2c6f1cf3ba1aa0f57923a4e58a531f08070defe0
}
