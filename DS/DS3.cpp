//smallest and largest

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
    
    int max;
    int min;
    
    max=Array[0];
    for (int i=0; i<S; i++)
    {
        if(max<Array[i])
            max=Array[i];
    }
    
    min=Array[0];
    for(int i=0; i<S; i++)
    {
        if(min>Array[i])
            min=Array[i];
    }
    cout<<"Largest element : "<<max<<endl;
    cout<<"Smallest element : "<<min<<endl;
}