#include<iostream>
using namespace std;
class object2;
class object;
class object3
{
  int c;
  public:
      void sum(object,object2);

};
class object{
  int a;
  public:
      object(int g)
      {
         a=g;
         cout<<"value of 1st integer: "<<a<<endl;
      }
       friend void object3::sum(object,object2);
};
class object2{
   int b;
   public:
       object2(int g)
       {
         b=g;
         cout<<"value of 2nd integer: "<<b<<endl;
       }
       friend void object3::sum(object,object2);
};
 void object3::sum(object a1,object2 aa)
         {
         cout<<"sum of no. is: "<<a1.a+aa.b;
       }
int main()
{
object aa(10);
object2 a1(25);
object3 ab;
oo.sum(aa,a1);
return 0;
}
