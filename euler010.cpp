/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million. */

#include <iostream>
using namespace std;

long check(long i)
{
	for (long j = 2; i > j; ++j){
		if (i % j == 0)
			return 0;
	}

	return i;
}

int main()
{
	system("clear");
	long primeMax = 0;
	long long sum = 0;

	cout << "Insert the max: " << endl;
	cin >> primeMax;
	
	if (primeMax > 1)
	{
		for (long i = 2; primeMax > i; ++i)
		{
			sum += check(i);
			cout << i << endl;
		}
	}

	cout << "sum is: " << sum << endl;
	return 0;
}
