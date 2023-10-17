#include<iostream>
using namespace std;
class shape
{
    public:
    double a,b;
public:
    void getdata()
    {
        cout<<"\nEnter two values:";
        cin>>a>>b;
    }
    virtual void display_area()
    {
        cout<<"\nBase";
    }
};
class rectangle:public shape
{
public:
    void display_area()
    {
        cout<<"\nArea of rectangle:"<<a*b;
    }
};
class triangle:public shape
{
public:
    void display_area()
    {
        shape::display_area();
        cout<<"\nArea of triangle:"<<0.5*a*b;
    }
};
int main()
{
    shape *bptr[3];
    rectangle r;
    shape b;
    triangle t;
    bptr[0]=&r;
    bptr[1]=&t;
    bptr[2]=&b;
    bptr[0]->getdata();
    bptr[0]->display_area();
    bptr[1]->getdata();
    bptr[1]->display_area();
   // bptr[2]->display_area();
    return 0;
}
