#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    void get()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
    }
};
class B:public A
{
public:
    void multiply()
    {
        cout<<"Multiplication is:"<<a*b;
    }
};
int main()
{
    B b1;
    b1.get();
    b1.multiply();
    return 0;
}
