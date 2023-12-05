#include <iostream>

using namespace std;

int main()
{
    int n,i,j,s;
    cin>>n;
    
    for (int i=1; i<=n; i++)
    {
        
        
        for (int s=i; s<n; s++)
        {
            cout<<" ";
        }
        
        for (j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    
}