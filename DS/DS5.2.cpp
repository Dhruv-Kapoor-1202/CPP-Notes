//binary search in one dimensional array


#include <iostream>
using namespace std;

int main()
{
	int a[20], start, end, middle, n, i, key;
	cout<<"Enter total number of elements you want in an array: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter key element to search: ";
	cin>>key;
	
	start=0;
	end=n-1;
	middle=(start+end)/2;
	
	while(key!=a[middle] && start<=end)
	{
		if(key>a[middle])
		{
			start=middle+1;
		}
		else
		{
			end=middle-1;
		}
		middle=(start+end)/2;
	}
	
	if(key==a[middle])
	cout<<"element is found";
	else
	cout<<"Element not found";
}