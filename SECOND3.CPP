#include<iostream.h>
using namespace std;
void swap(int a,int b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int a=5;b=10;
    cout<<"Value of a:"<<a "and value of b:"<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a:"<<a "and value of b:"<<b<<endl;
    return 0;
}