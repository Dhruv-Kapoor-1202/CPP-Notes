//Transpose of matrix


#include <iostream>
using namespace std;

int main()
{
	int i, j, a[10][10], T[10][10];
	int n;
	
	cout<<"Input A matrix \n";
	cout<<"Input order of MAtrix \n";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			T[i][j]=a[j][i];
		}
	}
	
	cout<<"Transpose of given matrix is \n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<T[i][j]<<'\t';
			
		}
		cout<<'\n';
	}
}