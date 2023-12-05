//Multiplication of two matrices



#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    int i, j, k;
    int a[i][j], b[i][j], c[i][j];

    cout<<"Input A Matrix\n";
    cout<<"Input r1 and c1: \n";
    cin>>r1>>c1;

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Input B Matrix\n";
    cout<<"Input r2 and c2: \n";
    cin>>r1>>c1;

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cin>>b[i][j];
        }
    }

    if (c1==r2)
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                c[i][j]=0;
                
                for(k=0; k<c1; k++)
                {
                    c[i][j]=c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
    }

    else
    cout<<"Multiplication not possible";

    cout<<"Resultant matrix is \n";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<c[i][j];
        }
    }
    
}