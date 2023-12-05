/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception 
{
    const char * what () const throw () 
    {
        return "C++ Exception";
    }
};
 
int main() 
{
    try 
    {
        throw MyException();
    } 
    catch(MyException& e) 
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    } 
    catch(std::exception& e) 
    {
      //Other errors
    }
}