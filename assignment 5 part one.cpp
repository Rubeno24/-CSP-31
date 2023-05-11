//Ruben Ortega
//CSP 31B
//Assingment 5 part 1 Polymorphism
#include <iostream> 
using namespace std;

class stuff
{
public:

    
    int add(int num_1,int num_2)
    {
        
        return num_1 + num_2;
       
    }

    float add(int num_1, float float_1)
    {

        return num_1 + float_1;

    }

    string add(string str1, string str2, string str3)
    {

        return str1 + str2 + str3;

    }

    

   
};

int main()
{
    stuff newStuff;

    int intgr_1 = 10;
    int intgr_2 = 20;
   
    float flt_1 = 25.5;

    string str_1 = "Ruben", str_2 = "Ortega", str_3 = "CSP31B";

    cout << "The result of " << intgr_1 << " Plus " << intgr_2 << " equals " << newStuff.add(intgr_1,intgr_2) << endl;
    cout << "The result of " << intgr_1 << " Plus " << flt_1 << " equals " << newStuff.add(intgr_1, flt_1) << endl;
    cout << "The result of " << str_1 << " Plus " << str_2 <<" Plus "<<str_3<< " equals " << newStuff.add(str_1, str_2,str_3) << endl;

    
    return 0;
}
