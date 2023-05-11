//Final assignment 5
//Ruben Ortega 
//Csp 31 B
#include <iostream>
using namespace std;

int grade(int test, int exam) {
    int mark = test + 70 * exam / 50;
    return (mark + .5);
}



int getGrade(int theGrade)
{
    int maxGrade = 50;

    if (theGrade >= 0 && theGrade <= maxGrade) {

        cout << theGrade;
        return theGrade;
    }
    else {
        cout << "That grade is out of range." << endl;

        cout << "Please input a grade on 0 to " << maxGrade << ": " << endl;;

        cin >> theGrade;
    }
}
        

    int main()
{
    int midterm;
    int final;
    cout << "Please input the midTerm grade: " ;
    midterm = getGrade(30);
    cout << endl << "Please input the final grade: ";
    final = getGrade(45);
    cout <<endl<< "This student got " << grade(midterm, final);
    cout << "% in the course";
    return 0;
}