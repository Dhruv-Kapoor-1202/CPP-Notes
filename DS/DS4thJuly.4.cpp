//program to row and column elements


#include <iostream>

using namespace std;

int main()
{
    int r, c, i, j;
    int a[20][20];
    int sum;
    cout<<"Input r and c: \n";
    cin>>r>>c;
    cout<<"Input A matrix \n";
    
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix A:"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //for rows
    for(i=0; i<r; i++)
    {
        sum=0;
        for(j=0; j<c; j++)
        {
            sum=sum+a[i][j];
        }
        cout<<"Sum of elements in Row "<< i+1<<" is "<< sum<<endl;
    }
    
    //for columns
    for(j=0; j<c; j++)
    {
        sum=0;
        for(i=0; i<r; i++)
        {
            sum=sum+a[i][j];
        }
        cout<<"Sum of elements in columun "<< i+1<<" is "<< sum<<endl;
    }
    
}