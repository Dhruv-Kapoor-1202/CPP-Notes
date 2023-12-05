
#include <iostream>

using namespace std;

int main()
{
    int arr[5][4];
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    for(int i=0; i<5; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
            sum+= arr[i][j];
            cout<<arr[i][j]<<"\t";
        
        }
        arr[i][3]=sum/3;
        cout<<arr[i][3];
        cout<<endl;
        
    }
    
}