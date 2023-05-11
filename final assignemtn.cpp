//Ruben Ortega
// Final Assignment.cpp
//Csp 31a 

#include <iostream>
using namespace std;


class Animal
{
private:
	string name;
	int age;

public:

	Animal(string name1, int age1)
	{
		name = name1;
		age = age1;
	};

	string Get_Name()
	{
		return name;
	}
	int Get_Age()
	{
		return age;
	}

};
int main()
{
	string name1;
	string name2;
	string name3;
	int age1;
	int age2;
	int age3;

	cout << "Enter the first name" << endl;
	cin >> name1;
	cout << "Enter the second name" << endl;
	cin >> name2;
	cout << "Enter the third name" << endl;
	cin >> name3;

	cout << "Enter the first age" << endl;
	cin >> age1;
	cout << "Enter the second age" << endl;
	cin >> age2;
	cout << "Enter the third age" << endl;
	cin >> age3;


	// Instead of manuly setting the name and age I let the user set the name and age and plugged it in for each instance.


	Animal animal1(name1, age1);
	cout << "Name is " << animal1.Get_Name() << " Age is " << animal1.Get_Age() << endl;

	Animal animal2(name2, age2);
	cout << "Name is " << animal2.Get_Name() << " Age is " << animal2.Get_Age() << endl;

	Animal animal3(name3, age3);
	cout << "Name is " << animal3.Get_Name() << " Age is " << animal3.Get_Age() << endl;
}