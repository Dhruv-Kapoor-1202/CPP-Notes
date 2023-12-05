/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception 
{
    public:
    const char * what () const throw () 
    {
        return "Salary cannot be negative.";
    }
};
class Employee
{ 
    int salary;
    public:
    Employee(int p)
    {
        try
        {
            if (p<0)
            throw MyException();
            else
            salary = p;
        }
        catch(MyException& e)
        {
            std::cout << "MyException caught" << std::endl;
            std::cout << e.what() << std::endl;
        }
      
}
    void display()
    {
        cout<<salary;
    }
};
 
int main() {
  /* try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }*/
    Employee r(9000);
    Employee r1(-999);
}