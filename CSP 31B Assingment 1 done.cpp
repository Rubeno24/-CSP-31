// Csp 31B Assignment 1
//Ruben Ortega

#include <iostream>
using namespace std;



class Rectangle
{
private:
    double height, width;


public:
    Rectangle(double h, double w)
    {
        height = h;
        width = w;
    };
    double Area()
    {
        double area = height * width;
        return area;
    };
};






int main()
{
    double height_1;
    double width_1;
    cout << "enter the height  ";
    cin >> height_1;
    cout << "enter the width   ";
    cin >> width_1;
    //The user can erase top block of code and can enter the numbers manauly in the instance of the class. 
    //I prefer to not change the code everytime I want to calculate a different area.



    Rectangle rectangle1(height_1, width_1);
    cout << "the area of the rectangle is  " << rectangle1.Area() << endl;

};


