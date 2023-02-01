/*Given positive two integers m and n such that m<n, the greatest common divisor of m and n
is the same as the greatest common divisor of m and (n-m). Use this fact to write a recursive
definition of the function "greatest_common_divisor(...)", which takes two positive integer
arguments and returns their greatest common divisor. Test your function in a suitable main
program.*/


#include <iostream>
using namespace std;

int greatest_common_divisor(int m, int n) {
  if (n == 0) {
    return m;
  }
  return greatest_common_divisor(n, m % n);
}

int main() {
  int m, n;
    cout << "Enter two positive integers: ";
    cin >> m >> n;
    cout << "The greatest common divisor is: " << greatest_common_divisor(m, n);
  return 0;
}

