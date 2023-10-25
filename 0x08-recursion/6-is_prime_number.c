/**
 * is_prime_number - Checks if a number is a prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (is_prime_recursive(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * is_prime_recursive - Recursively checks if a number is prime.
 * @number: The number to check for primality.
 * @divisor: The current divisor, starting from n / 2.
 *
 * Return: 1 if number is prime, 0 otherwise.
 */
int is_prime_recursive(int number, int divisor)
{
	if (divisor == 1)
		return (1);
	if (number % divisor == 0)
		return (0);

	return (is_prime_recursive(number, divisor - 1));
}
