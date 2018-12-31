/*
 * Euler Project Problems - 15
 *
 * Starting in the top left corner of a 2×2 grid, and only being able to move
 * to the right and down, there are exactly 6 routes to the bottom right corner.
 * How many such routes are there through a 20×20 grid?
 *
 */

#include <iostream>

int main()
{
  int nGridSize;
  long long nRoutes = 1;
  std::cout << "Insert a value: ";
  std::cin >> nGridSize;

  if (nGridSize > 1 && nGridSize < 21)
    for (int i = 0; i < nGridSize; ++i)
    {
      nRoutes *= (2 * nGridSize) - i;
      nRoutes /= i + 1;
    }

  std::cout << "Paths: " << nRoutes << std::endl;
}
