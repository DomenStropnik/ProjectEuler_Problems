/* 
 * Euler Project - Problem 4
 *
 * A palindromic number reads the same both ways. The largest palindrome made 
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Answer: 906609
 * Source: https://projecteuler.net/problem=4
 * Code by: Domen Stropnik
 */

#include <iostream>

int reverse(int value)
{
	int reversed = 0;
	
	while (value)
	{
		reversed *= 10;
		reversed += (value % 10);
		value /= 10;
	}

	return reversed;
}

int main()
{
	long maxPalindromic = 0;
	long value = 0;
	int a = 1; 

	int numDigits = 0;
	std:: cout << "Insert the value of the digits: ";
	std:: cin >> numDigits;

	while (numDigits != (0, 1))
	{
		a *= 10;
		--numDigits;
	}

	for (int i = a; i < a * 10; ++i)
	{
		for (int j = a; j < a * 10; ++j)
		{
			value = i * j;

			if (value != reverse(value))
				continue;
			if (maxPalindromic < value)
				maxPalindromic = value;
		}
	}
	
	std::cout << "The largest palindrome is: " << maxPalindromic << std::endl;
	
	return 0;
}
