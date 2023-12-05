#include <iostream>
#include <stack>
using namespace std;
class Employee
{
    int eid;
    string ename;
    public:
    Employee(int x, string s)
    {
        eid =x;
        ename = s;
    }
    ~ Employee()
    {
        cout<<"Employee Id: "<<eid<<"\n Employee name: "<<ename<<endl;
    }
    
};

int main() {
	stack<int> s;
	s.push(21);
	s.push(22);
	s.push(24);
	s.push(25);
	
	s.pop();
	s.pop();

	while (!s.empty()) {
		cout << ' ' << s.top();
		s.pop();
	}
	
	stack<Employee> e;
	e.push(Employee(101,"AAAA"));
	e.push(Employee(12,"BBBB"));
	e.push(Employee(13,"CCCC"));
	e.push(Employee(14,"EEEE"));
	while (!e.empty()) {
	    		e.pop();}
}