/* Euler Projects - Problem 9
 *
 * A Pythagorean triplet is a set of three natural numbers,
 * a < b < c, for which, a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 *
 * Answer:
 * Source: https://projecteuler.net/problem=9
 * Code by: Domen Stropnik
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 0, b = 0, c = 0;

  int sum;
  cout << "Insert the sum: ";
  cin >> sum;
  bool find = false;

  if (sum % 2 == 0)
  {
    for (a = 2; a < (sum / 2); ++a)
    {
      for (b = 2; b < (sum / 2); ++b)
      {
          c = sum - a - b;
          if (a*a + b*b == c*c)
          {
            find = true;
            break;
          }
      }
      if (find)
        break;
    }
  }

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  cout << "product abc: " << a * b * c << endl;

  return 0;
}
