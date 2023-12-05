#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *start=NULL;

void insert_at_begin(int info)
{
    Node *temp;
    temp = new Node();
    temp->data = info;
    temp->next = start;
    start = temp;
}

void display()
{
    Node *ptr;
    ptr = start;
    while(ptr!=0)
    {
        cout<<ptr->data<<'\n';
        ptr = ptr->next;
    }
}

int main()
{
    insert_at_begin(25);
    insert_at_begin(20);
    insert_at_begin(15);
    insert_at_begin(10);
    insert_at_begin(5); 
    cout<<"linked list is "<<endl;
    display();
    return 0;
}