/*
 * Euler Project - Problem 1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Answer: 233168
 * Source: https://projecteuler.net/problem=1 
 */

#include <iostream>

int main()
{
	int nSum = 0; //an int ariable holding the sum of all the mltiples.

	int a; //1st variable holding the value of the 1st multiple.
	std::cout << "Enter the 1st value: ";
	std::cin >> a;

	int b; //2nd variable holding the value of the 2nd multiple.
	std::cout << "Enter the 2nd value: ";
	std::cin >> b;

	int nValue; //main variable for finding the wished sum.
	std::cout << "Enter the value to receive sum of multiples: ";
	std::cin >> nValue;
	
	if (a > 1 && b > 1 && a != b && nValue > a && nValue > b){ //error checking.
		for (int i = 0; i < nValue; ++i) //loop.
			if (i % a == 0 || i % b == 0)
				nSum += i;
		std::cout << "The sum is: " << nSum << std::endl; //result output.
	}
	else {
		std::cout << "You made a logic error!" << std::endl; //error output.
	}

	return 0;
}		
