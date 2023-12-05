#include <iostream>
using namespace std;

int main()
{
	int marks[] = {100, 50 , 78, 79, 50, 45, 78, 56, 12, 79};
	int s1 = sizeof(marks)/sizeof(marks[0]);
	
	cout<<"Original array of marks: ";
	
	for(int i = 0; i <s1; i++)
	{
		cout<<marks[i]<<" ";
	}
	cout<<"\nUnmatched marks of the students are: ";
	
	for (int i = 0; i < s1; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			if (marks[i] == marks[j])
			{
				break;
			}
			if(i == j)
			{
				cout<<marks[i]<<" ";
			}
		}
	}
}
