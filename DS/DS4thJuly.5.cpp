//sum of diagonal elements



#include <iostream>

using namespace std;

int main()
{
    int r, c, i, j;
    int a[20][20];
    int SumP=0;
    int SumS=0;
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
    
    
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            SumP=SumP+a[i][j];
            
            if((i+j)==r-1)
            SumS=SumS+a[i][j];
        }
    }
    cout<<"Sum of primary diagonal elements: "<<SumP<<endl;
    cout<<"Sum of secondary diagonal elements: "<<SumS<<endl;
}
