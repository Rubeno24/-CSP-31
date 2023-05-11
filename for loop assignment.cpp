//Csp 31A
//Ruben Ortega
//For Loop Assignment

#include <iostream>
using namespace std;

int main()
{
    int x, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (x = 1; x <= n; x++)
    {
        sum += x * x;
        cout << x << "*" << x << " = " << x * x << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}