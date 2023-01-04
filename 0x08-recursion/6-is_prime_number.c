#include "main.h"
/**
 * is_prime_number-checks if the number is prime or not
 * @n:an integer to be checked
 * Return:1 if prime
 * 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2 || n % 2 != 0)
		return (1);
	if (n == 1)
		return (0);
	else
		return (0);
}
