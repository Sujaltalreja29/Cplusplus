#include<iostream.h>
#include<conio.h>
void main()
{
	int num,temp,sum,result=0;
	cout<<"Enter num:";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		sum=temp%10;
		result=result0+(sum*sum*sum);
		temp=temp/10;
	}
	if(result==num)
	{
		cout<<num<<"is Armstrong number";
	}
	else
	{
		cout<<num<<"is not armstrong number";
	}
}