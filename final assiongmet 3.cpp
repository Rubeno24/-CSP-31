//RubeN Ortega
//Final Assignement 3
//Csp 31B
#include <iostream>
using namespace std;

int main()
{
    int forCount = 0;
    int count = 0;
    char done = 'Y';
    
    while (done == 'Y')
    {
        cout << "Continue? (Y/N)"<<endl;
        count++;
       
        cin >> done;
        cout << "Count is " << count << endl;

    }


 

    return 0;
};