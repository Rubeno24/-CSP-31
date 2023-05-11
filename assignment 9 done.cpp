// Ruben Ortega  
// CSP 31B
//Assignment 9 stacks using linked list
#include <iostream>  
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

//This fucntion is called from the main function and uses a for loop to pass the numbers from the array into a linked list
void push(int data)
{
    struct Node* temp;
    temp = new Node();
    temp->data = data;
    temp->link = top;  
    top = temp;
}

 
int isEmpty()
{
    return top == NULL;
}

//This fucntion tell you the top value of the stack.
int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

//This function get the top value and deletes it, imagine a stack of bricks and you smack the top one off the stack
int pop()
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
            cout << temp->data<<","; 
            temp = temp->link;
        }
    }
}  

//Main function from here we call our other fucntions here we have our array and pass those values to the push function
//then we call whatever function we need to do the intended task
int main()
{
    int myArr[] = {185, 15, 25, 553, 144 };
    for (int i = 0; i <= 4; ++i) {
        

        push(myArr[i]);
    }
    display();
    cout << "\nTop element is " << peek() << endl;
    cout << peek() << " Got errased "  << endl;
    pop();
    display();
  
    return 0;
}