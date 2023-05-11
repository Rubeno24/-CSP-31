//Ruben Ortega
//CSP 31B
//Assignment 7 part 1 Linked List
#include <iostream>
using namespace std;

class Node
{
public:
	string Course_Name;
	string Course_Num;
	string Course_Room;
	Node* Next;

};

void InsertAfter(Node* Prev_Node, string CourseName, string course_Num, string CourseRoom)
{
	if (Prev_Node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();
	new_node->Course_Name = CourseName;
	new_node->Course_Num = course_Num;
	new_node->Course_Room = CourseRoom;
	new_node->Next = Prev_Node->Next;
	Prev_Node->Next = new_node;
}

void DeleteNode(class Node* node_ptr)
{
	class Node* temp = node_ptr->Next;
	node_ptr->Course_Name = temp->Course_Name;
	node_ptr->Next = temp->Next;
	free(temp);

}

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

	third->Course_Name = "Nutrition";
	third->Course_Num = "Fcs 6";
	third->Course_Room = "Schma Online Class";
	third->Next = NULL;


	InsertAfter(head, "Spanish", "Spanish Native 1", "Schma online Class");
	DeleteNode(second);
	PrintList(head);
	return 0;


	//A node was inserted after the first node which was spanish.
	//This made math precal 1 get deleted and you end up with C++,Spanish, and nutrition.
};



