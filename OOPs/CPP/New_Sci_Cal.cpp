/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265

using namespace std;



void addition(int , int );
void subtraction(int , int );
void multiplication(int, int );
void division(int , int);
void factorial(int);
void power(double, double );
void square(double );
void cube(double );
void squareroot(double );
void sin1(double );
void cos1(double );
void tan1(double );
void log1(double );

int main()
{
    cout << "Enter 0 to quit the program\n\n\n";
    
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for Division \n";
    cout << "Enter 5 for Power \n";
    cout << "Enter 6 for Factorial \n";
    cout << "Enter 7 for Square \n";
    cout << "Enter 8 for Cube \n";
    cout << "Enter 9 for Square Root\n";
    cout << "Enter 10 for Sin Function\n";
    cout << "Enter 11 for Cos Function\n";
    cout << "Enter 12 for Tan Function\n";
    cout << "Enter 13 for Log (base: e)\n\n";

    int choice;
    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition(4,5);
            break;
        case 2:
            subtraction(7,2);
            break;
        case 3:
            multiplication(5,3);
            break;
        case 4:
            division(4,2);
            break;
        case 5:
            power(4, 2);
            break;
        case 6:
            factorial(5);
            break;
        case 7:
            square(5);
            break;
        case 8:
            cube(3);
            break;
        case 9:
            squareroot(4);
            break;
        case 10:
            sin1(45);
            break;
        case 11:
            cos1(45);
            break;
        case 12:
            tan1(45);
            break;
        case 13:
            log1(10);
            break;

        case 0:
            exit(0);
            break;
        default:
            cout << "\n##********ERROR. PLEASE ENTER YOUR CHOICE AGAIN.********##.\n\n";
            break;
        }
    }

    return 0;
}

void addition(int a, int b){
    
    cout<<"The sum of "<< a <<" and "<< b <<" is "<< a+b <<endl;
}
void subtraction(int a, int b){
    
    cout<<"The difference of "<< a <<" and "<< b <<" is "<< a-b <<endl;
}
void multiplication(int a, int b){
    
    cout<<"The multiplication of "<< a <<" and "<< b <<" is "<< a*b <<endl;
}
void division(int a, int b){
    
    cout<<"The division of "<< a <<" and "<< b <<" is "<< (float)a/(float)b <<endl;
}
void factorial(int n){
    
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<< n <<" is "<< fact <<endl;
}
void power(double b, double e){
    
    double power = pow(b,e);
    cout<<"The solution for base "<< b <<" and exponent "<< e <<" is "<< power <<endl;
}
void square(double b){
    
    double power = pow(b,2);
    cout<<"The square of "<< b <<" is "<< power <<endl;
}
void cube(double b){
    
    double power = pow(b,3);
    cout<<"The cube of "<< b <<" is "<< power <<endl;
}
void squareroot(double n){
    
    double squareRoot = sqrt(n);
    cout<<"The Square root of "<<n <<" is "<< squareRoot <<endl;
}
void sin1(double a ){
    
    double sin1 = sin(a*PI/180);
    cout<<"The Sin of "<< a <<" degrees is "<< sin1 <<endl;
}
void cos1(double a){
    
    double cos1 = cos(a*PI/180);
    cout<<"The Cos of "<< a <<" degrees is "<< cos1 <<endl;
}
void tan1(double a){
    
    double tan1 = tan(a*PI/180);
    cout<<"The Tan of "<< a <<" degrees is "<< tan1 <<endl;
}
void log1(double a){
    
    double log1 = log(a);
    cout<<"The Log of "<< a <<" is "<< log1 <<endl;
}
