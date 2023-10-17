#include<iostream.h>
using namespace std;
float area(float r,float pi=3.14)
{
    return pi*r*r;
}
int main()
{
    int x;
    cout<<"Enter the radius:";
    cin>>x;
    cout<<"Area of circle:"<<area(x);
    return 0;
}