//Ruben Ortega
//Csp 31B
//Assignment 8 Recurssion

#include <iostream> 
using namespace std;
// Factorial function 
int fib(int fib_num)

// Stop condition 
{
    if (fib_num == 1 || fib_num == 2)
        return 1;
    if (fib_num == 0)
        return 0;

    else

        return fib(fib_num - 1) + fib(fib_num - 2);
}



// Driver method 
int main()
{
    int n = 0;
    cout << "Enter a number" << endl;
    cin >> n;

    cout <<"The next number in the fib sequence is "<< fib(n) << endl;

    return 0;
};