/*
 *
 * Euler Project Problems - 15
 *
 * Starting in the top left corner of a 2×2 grid, and only being able to move
 * to the right and down, there are exactly 6 routes to the bottom right corner.
 * How many such routes are there through a 20×20 grid?
 *
 */

#include <iostream>

unsigned long long nFactorial1(int x);
unsigned long long nFactorial2(int x);

int main()
{
  int nValue = 0;
  std::cout << "Insert grid value (max 20): ";
  std::cin >> nValue;

  unsigned long long nNum1 = 0;
  unsigned long long nNum2 = 0;

  if (nValue <= 20 && nValue > 1)
  {
    nNum1 = nFactorial1(nValue);
    nNum2 = nFactorial2(nValue);
  }
  else
	std::cout << "Please insert a value above 1 or bellow 21" << std::endl;

  unsigned long long nNum3 = nNum1 / (nNum2 * nNum2);
  std::cout << nNum3 << std::endl;

  return 0;
}

unsigned long long nFactorial1(int x)
{
  x *= 2;
  unsigned long long times = 1;
  
  for (int i = 1; i <= x; ++i)
    times *= i;
  
  return times;
}

unsigned long long nFactorial2(int x)
{
  unsigned long long times = 1;
  
  for (int i = 1; i <= x; ++i)
    times *= i;
  
  return times;
}
