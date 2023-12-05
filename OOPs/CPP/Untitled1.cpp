#include <iostream>
using namespace std;

int main()
{
	/*n is the length of the array to be input*/
    int z[100], n, pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
    cout<<"Enter n: "<<endl;

    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>z[i];
    }
    for(int i = 0; i < n; i++)
    {
        if (z[i] > 0)
        {
            pos++;
        }
        else if (z[i] < 0)
        {
            neg++;
        }
        else 
        {
            zero++;
        }
        if (z[i]%2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<zero<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
    return 0;
}
