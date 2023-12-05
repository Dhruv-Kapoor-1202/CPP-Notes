#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node *start = NULL;

//insertion at beginning
void insert_at_begin(int info)
{
    Node *temp;
    temp = new Node();
    temp->data = info;
    temp->next = start;
    start = temp;
}

//insertion at end
void insert_at_end(int info)
{
    Node *temp;
    temp = new Node();
    temp->data = info;
    temp->next = NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        Node *q;
        q = start;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = temp;
    }
}

//insertion at a given position
void insert_at_position(int info, int position)
{
    Node *temp;
    temp = new Node();
    temp->data = info;
    temp->next = NULL;

    if(position < 1)
    {
        cout<<"\nPosition shoud be >=1.";
    }
    else if (position == 1)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        Node *q = start;
        for(int i = 1; i < position-1; i++)
        {
            if(q!=NULL)
            {
                q = q->next;
            }
        }
        if(q != NULL)
        {
            temp->next = q->next;
            q->next = temp;
        }
        else
        {
            cout<<"\nThe previous node is NULL.";
        }
    }
}
void display()
{
    Node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}


int main()
{
    insert_at_begin(5);
    insert_at_begin(4);
    insert_at_begin(3);
    insert_at_begin(2);
    insert_at_begin(1);
    insert_at_begin(0);

    display();
}