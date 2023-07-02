#include "main.h"

/**
 * factors - Factorize as many numbers as possible
 * @numero: number to be factorized
 * Return: nothing
 */
void factors(unsigned __int128 x)
{
	unsigned __int128 i = 3;
	unsigned long long y, g;

	y = (unsigned long long)x;
	if (x % 3 == 0)
	{
		printf("%llu=%llu*%d\n", y, y / 3, 3);
		return;
	}
	if (x % 2 == 0)
	{
		printf("%llu=%llu*%d\n", y, y / 2, 2);
		return;
	}
	for (i = 3; i <= x / i; i += 2)
	{
		if (x % i == 0)
		{
			g = (unsigned long long)i;
			printf("%llu=%llu*%llu\n", y, y / g, g);
			return;
		}
	}
}
