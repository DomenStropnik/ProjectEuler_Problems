/*
 * Euler Projects - Problem 3
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
 *
 * Answer: 6857
 * Source: https://projecteuler.net/problem=3
 * Code by: Domen Stropnik
 */

#include <iostream>

int main()
{
	long value = 0;
	std::cout << "Insert the value, so you can receive the "
		<< "largest prime factor: ";
	std::cin >> value;

	long maxFactor = 2;

	while (value % 2 == 0)
		value /= 2;
	
	if (value > 2)
	{
		for (int i = 3; i <= value; i += 2)
		{
			while (value % i == 0)
			{
				std::cout << "Prime factors: " << i << std::endl;
				value /= i;

				if (maxFactor < i)
					maxFactor = i;
			}
		}
	}

	std::cout << "The largest prime factor is " << maxFactor << std::endl;

	return 0;
}
