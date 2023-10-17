#include<iostream>
#include<string.h>
using namespace std;
class  abc
{
    char a[20];
public:
    void get()
    {
        cout<<"enter sring:"<<endl;
        cin>>a;
    }
   /* abc
    operator +(abc c)
    {
        abc x;
        strcat(a,c.a);
        strcpy(x.a,a);
        return x;
    }*/
    friend abc operator +(abc x,abc y);
    void display()
    {
        cout<<"String is:"<<a;
    }
};
abc operator +(abc x,abc y)
{
    strcat(x.a,y.a);
    return x;
}
int main()
{
    abc a1,a2;
    abc d;
    a1.get();
    a2.get();
    //d=a1+a2;
    d=operator+(a1,a2);
    d.display();
    return 0;
}
