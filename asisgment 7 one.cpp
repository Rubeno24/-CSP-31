//Ruben Ortega
//CSP 31B
//Assignmnet 7 part 1 Linked List

#include <iostream>
using namespace std;

struct Node
{
public:
	string Course_Name;
	string Course_Num;
	string Course_Room;
	Node* Next;


};
void PrintList(Node* print)
{
	while (print != NULL)


	{
		cout << print->Course_Name << " " << print->Course_Num << " " << print->Course_Room << " ";
		print = print->Next;
		cout << endl;
	}
	cout << endl;

}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->Course_Name = "C++ Programming";
	head->Course_Num = "CSp 31B";
	head->Course_Room = "Schma Online Class";
	head->Next = second;

	second->Course_Name = "Math Precal 1";
	second->Course_Num = "Math 38a";
	second->Course_Room = "Schma Online Class";
	second->Next = third;

	third->Course_Name = "Nutritoin";
	third->Course_Num = "Fcs 6";
	third->Course_Room = "Schma Online Class";
	third->Next = NULL;

	PrintList(head);

	return 0;
};


