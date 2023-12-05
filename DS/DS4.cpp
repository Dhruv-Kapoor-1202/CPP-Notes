//sum of even and odd

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
    int SumE=0;
    int SumO=0;
    for(int i=0; i<S; i++)
    {
        if(Array[i]%2==0)
        {
            SumE=SumE+Array[i];
        }
        else
        {
            SumO=SumO+Array[i];
        }
        
    }
    cout<<"Sum of all the even numbers in the array is "<<SumE<<endl;
    cout<<"Sum of all the odd numbers in the array is "<<SumO<<endl;
}