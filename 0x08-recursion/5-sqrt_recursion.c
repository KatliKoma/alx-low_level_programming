/**
 * _sqrt_recursion - natural square root of a number.
 * @n: number to be sqrted
 * Return: returns natural square root.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	int root = sqrt(n);

	if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (-1);
	}
}
