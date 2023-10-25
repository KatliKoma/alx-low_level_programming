/**
 * square_root - checks for the square root of c
 * @guess: current guess at square root
 * @number: number to find the square root of
 *
 * Return: -1 or square root of number
 */
int square_root(int guess, int number)
{
	if (guess * guess == number)
		return (guess);
	if (guess * guess > number)
		return (-1);
	return (square_root(guess + 1, number));
}

/**
 * find_square_root - returns the natural square root of a number
 * @n: integer to find the square root of
 *
 * Return: natural square root or -1
 */
int find_square_root(int n)
{
	if (n == 0)
		return (0);
	return (square_root(1, n));
}

