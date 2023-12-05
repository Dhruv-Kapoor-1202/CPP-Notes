#include <iostream>

using namespace std;

int main()
{
    int a[2][3]={{1,2,3},{7,8,9}};
    
    cout<<a[0];
    cout<<&a;
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            
            cout<<&a[0][0];
        }
    }
}
