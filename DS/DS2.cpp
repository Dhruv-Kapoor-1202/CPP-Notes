//element deletion 

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

    int pos;
    cout<<"Enter position to be deleted: ";
    cin>>pos;
    pos--;
    for(int i=pos; i<S; i++)
    {
        int temp=Array[i];
        Array[i]=Array[i+1];
        Array[i+1]=temp;
    }

    for(int i=0; i<S-1; i++)
    {
        cout<<Array[i]<<" ";
    }
    return 0;
}