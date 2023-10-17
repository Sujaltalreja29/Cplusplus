#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b && a>c)
        cout<<a<<" is max"<<endl;
    else if(b>c && b>a)
        cout<<b<<" is max"<<endl;
    else
        cout<<c<<" is max"<<endl;
}
float max(float a,float b,float c)
{
       if(a>b && a>c)
        cout<<a<<" is max"<<endl;
    else if(b>c && b>a)
        cout<<b<<" is max"<<endl;
    else
        cout<<c<<" is max"<<endl;
}
char max(char p[10],char q[10],char r[10])
{
        int a=strlen(p),b=strlen(q),c=strlen(r);
       if(a>b && a>c)
        cout<<p<<" is max"<<endl;
    else if(b>c && b>a)
        cout<<q<<" is max"<<endl;
    else
        cout<<r<<" is max"<<endl;
}
int main()
{
    int a=2,b=3,c=5;
    float i=2.3,j=3.3,k=7.5;
    char p[10]="abc",q[10]="abcd",r[10]="abcdef";
    max(a,b,c);
    max(i,j,k);
    max(p,q,r);
    getch();
}
