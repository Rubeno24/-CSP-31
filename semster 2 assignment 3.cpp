#include <iostream>
using namespace std;

//when you run it, 10+20 equals 30 which is assigned to num1
//then num1 equaling 30 +num2 equaling 20 gets you to 50


void PassByRef(int &x, int &y)
{
	
	x = x + y;
	
};
int passbyval(int x,int y ) 
{
	int sum;
	sum = x + y;
	return sum;
};



int main() {
	int sum1;
	int sum2;
	int num1 = 10;
	int num2 = 20;
	passbyval(num1, num2);
	sum2 = num1 + num2;
	cout << " The values of " << num1 << " and " << num2 << " is " << sum2 << endl;
	PassByRef(num1, num2);
	sum1 = num1 + num2;
	cout << " The values of " << num1 << " and " <<num2 << " is " << sum1 << endl;

	
	


};




