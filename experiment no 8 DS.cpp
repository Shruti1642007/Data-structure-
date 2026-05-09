#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

node *top = NULL;

node *front = NULL;
node *rear = NULL;

void push()
{
    int val;
    cout << "Enter value: ";
    cin >> val;

    node *newnode = new node;
    newnode->data = val;
    newnode->link = top;
    top = newnode;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow\n";
        return;
    }

    node *temp = top;
    cout << "Deleted element: " << temp->data << endl;
    top = top->link;
    delete temp;
}

void displayStack()
{
    node *ptr = top;

    if(ptr == NULL)
    {
        cout << "Stack is empty\n";
        return;
    }

    cout << "Stack elements: ";
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}


void insertQueue()
{
    int val;
    cout << "Enter value: ";
    cin >> val;

    node *ptr = new node;
    ptr->data = val;
    ptr->link = NULL;

    if(front == NULL)
    {
        front = rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

void deleteQueue()
{
    if(front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    node *temp = front;
    cout << "Deleted element: " << temp->data << endl;
    front = front->link;
    delete temp;
}

void displayQueue()
{
    node *ptr = front;

    if(ptr == NULL)
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int main()
{
    int mainChoice, choice;

    cout << "1. Stack\n2. Queue\nEnter your choice: ";
    cin >> mainChoice;

    if(mainChoice == 1)
    {
        do
        {
            cout << "\n--- STACK OPERATIONS ---\n";
            cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1: push(); break;
                case 2: pop(); break;
                case 3: displayStack(); break;
            }

        } while(choice != 4);
    }

    else if(mainChoice == 2)
    {
        do
        {
            cout << "\n--- QUEUE OPERATIONS ---\n";
            cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1: insertQueue(); break;
                case 2: deleteQueue(); break;
                case 3: displayQueue(); break;
            }

        } while(choice != 4);
    }

    else
    {
        cout << "Invalid choice";
    }

    return 0;
}

