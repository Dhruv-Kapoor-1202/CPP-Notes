#include<iostream>

using namespace std;

 

class Rectangle
{
    protected:
    int len ,brea;
    public:
        Rectangle()
        {
            len=5;
            brea=2;
        }
        Rectangle(int p)
        {
            len=p;
            brea=5;
        }
        Rectangle(int p , int q)
        {
            len=p;
            brea=q;
        }
        void area()
        {
            cout<<"volume"<<(len*brea)<<endl;
        }
};

class Cuboid : public Rectangle
{
    int hgt;
    public:
        Cuboid()
        {
            hgt=15;
        }
        Cuboid(int p) : Rectangle(p,p)
        {
            hgt=p;
        }
        Cuboid(int x,int y,int z) : Rectangle(x,y)
        {
            hgt=z;
        }
        Cuboid(int x, int z) : Rectangle(x)
        {
            hgt=z;
        }
        void vol()
        {
            cout<<"Volume of cuboid is "<<(len*brea*hgt)<<endl;
        }
};

 

int main()
{
    Cuboid obj;();
    
    Cuboid obj4(2,4);
    obj.vol();

    Cuboid obj2(10);
    obj2.vol();

    Cuboid obj3(5);
    obj3.vol
    obj4.vol();
    
    Cuboid obj5(2,5,7);
    obj5.vol();

    return 0;

}
