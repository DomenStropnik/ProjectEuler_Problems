/*
 * Euler Project - Problem 1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Answer: 233168
 * Source: https://projecteuler.net/problem=1
 * Code by: Domen Stropnik 
 */

#include <iostream>

int main()
{
	int sum = 0;
	
	int a = 0;
	std::cout << "Enter the 1st value: ";
	std::cin >> a;

	int b = 0;
	std::cout << "Enter the 2nd value: ";
	std::cin >> b;

	int value = 0;
	std::cout << "Enter the value of where you'd like to see the sum of" << 
		"all the multiples, bellow this current value: ";
	std::cin >> value;

	for (int i = 0; i < value; ++i)
		if (i % a == 0 || i % b == 0)
			sum += i;

	std::cout << "The sum is: " << sum << std::endl;

	return 0;
}		
