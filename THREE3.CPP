#include <iostream>
using namespace std;
float area(float b,float h)
{
  return (0.5*b*h);
}
float area(float q)
{
  return (1.73/(4*q*q));
}
float area(double a,double c)
{
  return 0.5*sqrt((a*a-c*c)/(4*c*c));
}
int main() {
 float b=12.3,h=9.99,q=10.01;
 double a=12.00,c=5.00;
 cout<<"Area of right angle triangle:"<<area(b,h);
 cout<<"Area of equilateral triangle:"<<area(q);
 cout<<"Area of isosceles triangle:"<<area(a,c);
  return 0;
}
