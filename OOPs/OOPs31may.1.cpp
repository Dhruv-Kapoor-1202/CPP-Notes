#include <iostream>
using namespace std;
    template <typename T,typename U>
   



class ComplexNum{
    private:
    T x;
    U y;

    public:
    ComplexNum(T a, U b){
        x=a;
        y=b;
    }
    void disp(){
        cout<<"value of x: "<< x << " value of y: "<<y;
    } 
};

int main(){
    ComplexNum<int,float> C1(4,5.6);
    C1.disp();
    cout<<endl;
    
    ComplexNum<int,int> C2(4,5);
    C2.disp();
    return 0;
}