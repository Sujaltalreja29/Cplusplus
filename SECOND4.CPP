#include<iostream.h>
using namespace std;
inline int max(int x,int y,int z)
{
	if(x>y && x>z)
		return x;
	else if(y>z && y>x)
		return y;
	else
		return z;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter Three Numbers:"<<endl;
	cin>>a>>b>>c;
	d=max(a,b,c);
	cout<<d;
	getch();
}
