/*A Prime Number is a number with only 1 and itself for divisors.
Write a program using your function to find the primes from 1 to 100.
HINT: a number can be determined to be prime by the following algorithm:

count = 2
prime = true
while count < target and prime
if target % count = 0
then prime = false
else count++*/

#include <iostream>
using namespace std;

int main() {

  int i, n = 200, count_ = 0;
  bool is_prime = true;


//Loop
  for (i = 2; i <= n/2; ++i) {

    if (n == 0 || n == 1) {
    is_prime = false;
    }
    else if (n % i == 0) {
      is_prime = false;
    }
    else {
      count_ ++;
    }

  }
  // Output

  cout << "Count of the prime number is " << count_ ;
  return 0;
}
