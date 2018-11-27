/*
 * Euler Projects - Problem 5
 *
 * 2520 is the smallest number that can be divided by each of the numbers 
 * from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible 
 * by all of the numbers from 1 to 20?
 *
 * Answer: 232792560
 * Source: https://projecteuler.net/problem=5
 * Code by: Domen Stropnik
 */

#include <iostream>
#include <cmath>

int increase(int value)
{
	int largSt = 0;

	for (int i = 2; i <= 3; ++i)
	{	
		int st = 0;
		while (value % i == 0)
		{
			value /= i;
			++st;
		}

		if (largSt < st && value == 1)
			largSt = st;
	}

	return largSt;
}

int largest(int value, int type)
{
	int largSt = 0;
	int largNum = 0;
	
	for (int i = 2; i <= value; ++i)
	{	
		int temp = i;
		int st = 0;

		while (temp % type == 0)
		{
			temp /= type;
			++st;
		}

		if (largSt < st && temp == 1)
		{
			largSt = st;
			largNum = i;
		}
	}

	return largNum;
}

int main()
{
	int start = 2; 	
	int end = 0;	
	std::cout << "Insert the ending value: ";
	std::cin >> end;

	long minNum = 1; 
	int sudo = largest(end, 2);
	int liho = largest(end, 3);
	
	minNum = minNum * pow (2, increase(sudo));
	minNum = minNum * pow (3, increase(liho));

	for (int i = start; i <= end; ++i)
		if (i % 2 != 0 && i % 3 != 0)
			minNum = minNum *i;

	std::cout << "The smallest number is: " << minNum << std::endl; 
	return 0;
}

