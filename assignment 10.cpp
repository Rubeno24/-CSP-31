// Ruben Ortega  
// CSP 31B
//Assignment 10 making a Queue
#include <iostream>  
using namespace std;

struct Node
{
    int data;
    struct Node* link;
   
};

struct Node* top, * rear;

void enqueue(int data)
{
    Node* temp = new Node();
    temp = new Node();
    temp->data = data;
    temp->link = NULL;
    
    if (rear == NULL) 
    {
        top = rear = temp;
        return;

    }
    rear->link = temp;
    rear = temp;
    temp->data = data;
}


int isEmpty()
{
    return top == NULL;
}


int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}


int findSecondLastNode()
{
    struct Node* temp = rear;

    
    while (temp != NULL) {

        // Check if the current node  is the 
        // second last node or not 
        if (temp->link == NULL)
            return temp->data;

      
        
    }
}

//This function get the top value and deletes it, 
int dequeue()
{
    struct Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;

        free(temp);
    }
}

//This is just the display function, shows what numbers are in the linked list and adds a coma to seperate them
void display()
{
    struct Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << ",";
            temp = temp->link;
        }
    }
}






//Main function from here we call our other fucntions here we have our array and pass those values to the enqueue function
//then we call whatever function we need to do the intended task
int main()
{

    int myArr[] = { 10, 99, 30, 72};
    for (int i = 0; i <= 3; ++i) {


        enqueue(myArr[i]);
    }
    display();
    cout << "\n"<< peek() <<" got Removed from the queue"<< endl;   
    dequeue();
    cout  << peek() << " got Removed from the queue" << endl;
    dequeue();
    enqueue(29);
    enqueue(50);
    display();
    cout << "\nTop element is " << peek() << endl;
    cout << "Last element is " << findSecondLastNode() << endl;
    
    return 0;
}