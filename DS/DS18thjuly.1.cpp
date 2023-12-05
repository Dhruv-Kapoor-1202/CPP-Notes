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
    
    
    for (int i=0; i<S; i++) 
    {
        for (int j=0; j<S-i; j++) 
        {
            if (Array[j]>Array[j+1]) 
            {
                int temp=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=temp;
            }
        }
    }
    
    for(int i=0; i<S; i++)
    {
        cout<<Array[i]<<" ";
    }
}