/*
 * Euler Project Problems - 15
 *
 * Starting in the top left corner of a 2×2 grid, and only being able to move
 * to the right and down, there are exactly 6 routes to the bottom right corner.
 * How many such routes are there through a 20×20 grid?
 *
 */

/*
#include <iostream>
#include <vector>
#include <cmath>

int nFactorial(int x);
int nFactorial2(int y);

int main()
{
  int nValue = 0;
  std::cout << "Insert grid value (max 20): ";
  std::cin >> nValue;
  unsigned long long returned = 0;
  unsigned long long st = 0;

  if (nValue <= 20 && nValue > 1)
  {
    returned = nFactorial(nValue);
    st = nFactorial2(nValue);
}
  unsigned long long finalValue = (pow(st, 2)) / (st * st);

  std::cout << finalValue << std::endl;
  return 0;
}

int nFactorial(int x)
{
  std::vector<int> nVector;
  x *= 2;
  unsigned long long times = 1;

  for (int i = 1; i <= x; ++i)
    nVector.push_back(i);

  for (unsigned int i = 0; i <= nVector.size() - 1; ++i)
    times *= nVector[i];

  return times;
}

int nFactorial2(int x)
{
  std::vector<int> nVector;
  unsigned long long times = 1;

  for (int i = 1; i <= x; ++i)
    nVector.push_back(i);

  for (unsigned int i = 0; i <= nVector.size() - 1; ++i)
    times *= nVector[i];

  return times;
}
*/

#include <iostream>

int main()
{
  const int gridSize = 20;
  long long paths = 1;

  for (int i = 0; i < gridSize; i++) {
    paths *= (2 * gridSize) - i;
    paths /= i + 1;
  }

  std::cout << paths << std::endl;
  return 0;
}
