//Ruben Ortega
//Assigment 7 Arrays
//Csp 31B
#include <iostream>
using namespace std;
#include <iostream> 
using namespace std;
int main()
{
    int num_Array = 0;
    cout << "Enter the Number Of Elements in the Array" << endl;
    cin >> num_Array;
    int* array = new int[num_Array],  i;

    for (i = 0; i < num_Array; i++)
    {
        cout << "input elemenet " << i << ": " ;
        cin >> array[i];
        
    }
     cout << "Entred Elements are : ";
     for (i = 0; i < num_Array; i++)
    {

       cout<<array[i]<<" ";
    }
     delete[] array;
    return 0;
};
