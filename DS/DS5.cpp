//linear search??

#include <iostream>
using namespace std;

int main() 
{
    int S;
    cout<<"Enter Size of the array: ";
    cin>>S;
    int Array[S];
    cout<<"Enter Array Elements: ";
    for(int i=0; i<S; i++)
    {
        cin>>Array[i];
    }

    cout<<"Enter key element: ";
    int key;
    cin>>key;
    int f=0;
    int i;

    for(i=0; i<S; i++)
    {
        if (key==Array[i])
        f=1;
    }
    if (f==1)
    cout<<"Element is found";
    else
    cout<<"Element not found";
}