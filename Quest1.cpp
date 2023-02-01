/*The Fibonacci sequence a(1), a(2), a(3), ..., a(n), ... is defined by
 a(1) =1
 a(2) = 1
 a(n) = a(n-1) + a(n-2), for all n > 2
This generates the sequence

1, 1, 2, 3, 5, 8, 13, 21, ...

Write a C++ function "fibonacci(...)" that computes the Fibonacci number corresponding to its
positive integer argument, so that, for example, fibonacci(7)== 13.*/


#include <iostream>
using namespace std;

long fibonaci (long);

long fibonaci (long f){
    if (f <= 1)
        f = 1;
    else
        return fibonaci(f-1) + fibonaci(f-2);

}

int main() {
    int f,i;
    cout << "Input Number ";
    cin  >> f;
    cout << fibonaci (f);

return 0;
}

