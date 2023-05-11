//Ruben Ortega
//CSP 31B
//Assignment 4 Inheritance

#include <iostream> 
using namespace std;

// base class  
class Shape
{
protected:
    int height;
    int width;

};


class Triangle : public Shape
{
public:

    int TriangleGetArea(int height3, int width3)
    {
        height = height3;
        width = width3;
        return (height * width) / 2;
    }
};



class Rectangle : public Shape
{
public:
    int RectangleGetArea(int height4, int width4)
    {
        height = height4;
        width = width4;
        return height * width;

    }
};



int main()
{

    Triangle obj1;
    Rectangle obj2;
    int height1 = 5;
    int width1 = 2;
    int width2 = 3;
    cout << "For a triangle with a base of " << width1 << " and the height of " << height1 << " the area would be " << obj1.TriangleGetArea(width1, height1) << endl;
    cout << "For a rectangle with a base of " << height1 << " and the height of " << width2 << " the area would be " << obj2.RectangleGetArea(width2, height1) << endl;
    return 0;
}
