//Inserting an element at a specific position


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

    int n;
    cout<<"Enter Element to be added: ";
    cin>>n;
    int pos;
    cout<<"Enter position at which the n is to be added: ";
    cin>>pos;
    for(int j=S; j>=pos; j--)
    {
        int temp=Array[j];
        Array[j]=Array[j-1];
        Array[j+1]=temp;
    }

    Array[pos-1] = n;

    for(int i=0; i<S+1; i++)
    {
        cout<<Array[i]<<" ";
    }
    return 0;

}