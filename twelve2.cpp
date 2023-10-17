#include<iostream>
using namespace std;
class shape
{
    public:
    double a,b;
public:
    shape()
    {
        cout<<"\nenter two values";
        cin>>a>>b;
    }
    virtual void display_area()=0;
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
        cout<<"\nArea of triangle:"<<0.5*a*b;
    }
};
int main()
{
  shape *bptr;
  rectangle r;
  bptr=&r;
  bptr->display_area();
  triangle t;
  bptr=&t;
  bptr->display_area();
  return 0;
}
