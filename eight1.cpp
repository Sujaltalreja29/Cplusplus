#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc()
    {
        cout<<"Enter the value:"<<endl;
        cin>>a;
    }
    void operator ++()
    {
        cout<<"\nValue is:"<<++a;
    }
    void operator ++(int)
    {
        cout<<"\nValue is:"<<a++;
    }
    friend void operator --(abc);
};
void operator --(abc a1)
{
    cout<<"\n Value is:"<<--a1.a;
}
int main()
{
    abc a1;
    a1++;
    ++a1;
    --a1;
    return 0;
}
