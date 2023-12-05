#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node *last = NULL;

void add_at_end(int info)
{
    Node *temp;
    temp = new Node();
    temp->data = info;

    if(last == NULL)     //when list is empty
    {
        last = temp;
        temp->next = last;
    }
    else                  //value added at the end of list
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    Node *ptr;
    ptr = last;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    add_at_end(10);
    add_at_end(20);
    add_at_end(30);
    add_at_end(40);
    add_at_end(50);

    display();
}