#include<iostream>
using namespace std;
class A
{
public:
    int a;
   void get()
    {
        cout<<"Enter number:"<<endl;
        cin>>a;
    }
};
class B
{
public:
    int b;
   void get1()
    {
        cout<<"Enter number:"<<endl;
        cin>>b;
    }
};
class C:public A,public B
{
public:
    void multiply()
    {
        cout<<"Multiply:"<<a*b;
    }
};
int main()
{
    C c1;
    c1.get();
    c1.get1();
    c1.multiply();
    return 0;
}
