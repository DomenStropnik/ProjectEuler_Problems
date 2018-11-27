/* 
 * Euler Projects - Problem 6
 *
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten 
 * natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 *
 * Answer:
 * Source: https://projecteuler.net/problem=6
 * Code by: Domen Stropnik
 */

#include <iostream>
#include <cmath>

int sumSquare(int value)
{
	int sum = 0;

	for (int i = 1; i <= value; ++i)
		sum += i * i;

	return sum;
}

int squareSum(int value)
{
	int sum = 0;

	for (int i = 1; i <= value; ++i)
		sum += i;

	sum *= sum;
	return sum;
}

int main()
{
	int value = 0;
	std::cout << "Insert a value: ";
	std::cin >> value;
 
	int a = sumSquare(value);
	int b = squareSum(value);

	std::cout << "The difference between these sums is: " <<
		b - a << std::endl;
	
	return 0;
}
