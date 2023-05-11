//Ruben Ortgea
//CSP 31B
//Assignment 5 part 2 
#include <iostream> 
using namespace std;

class MybaseClass
{
public:

    virtual void dispaly()
    {
        cout << "Display function of MyBaseClass class" << endl;
    }
};

class Somederived :public MybaseClass
{
public:

    void dispaly()
    {
        cout << "Display function of SomeDerived class" << endl;
    }
};
class Otherderived :public MybaseClass
{
public:

    void dispaly()
    {
        cout << "Display function of OtherDerived class" << endl;
    }
};


//main function 
int main()
{//virtual function, bound at runtime (Runtime polymorphism) 



    MybaseClass* ptr;
    MybaseClass baseclass;
    ptr = &baseclass;

    MybaseClass* ptr1;
    Otherderived dervivedclass;
    ptr1 = &dervivedclass;

    MybaseClass* ptr2;
    Somederived derivedclass2;
    ptr2 = &derivedclass2;

    ptr->dispaly();
    ptr1->dispaly();
    ptr2->dispaly();

    return 0;
}
