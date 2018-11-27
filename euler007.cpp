/*
 * Euler Projects - Problem 7
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * What is the 10001st prime number?
 *
 */

#include <iostream>

int test(int value)
{
	int prime = value;
	int st = 0;

	for (int i = 2; i <= value; ++i)
	{
		int temp = value;
		while (temp % i == 0)
		{
			st = st + 1;
			temp /= i;
		}
		
		if (temp == 1)
		{
		    prime = i;
		}
	}

	if (st != 1)
	{
		prime = 0;
	}

	return prime;
}

int main()
{
	int value = 0;
	std::cout << "Insert the value: ";
	std::cin >> value;

	int temp = 3;
	int start = 3;	
	int largest = 0;
	int fuck = 0;


	while (start <= value)
	{
		temp += 2;
		fuck = test(temp);
		std::cout << fuck << std::endl;
		
		if (fuck > largest && fuck != 0)
		{
			++start;
			largest = temp;
			fuck = 0;
		}
		else
		{
			fuck = 0;
		}
	}
	
	std::cout << largest << std::endl;

	return 0;
}
