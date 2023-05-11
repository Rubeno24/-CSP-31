//Ruben Ortega
//Final assignemnt 4
//Csp 31b

#include <iostream>
using namespace std;
int main()
{
    int myArray[] = { 2,4,8,16,32,64,128,256,512,1024 };
    int value = 10;

    for (int i = 0; i < 10; ++i)
    {
        
        cout<<"Array: " << myArray[i] << " "<<endl;
    }

    while (!(value == 10) && !(value == 20))
    {
        cout << "Variable 'value' is :" << value << endl;
        value = 10;
    }
    return 0;
}
   

