#include<iostream>
int main()
{
	char op;
	float n1,n2;
	cout<<"Enter operator:+,-,*,%";
	cin>>op;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	
	switch(op)
	{
		case '+':
		cout<<n1<<"+"<<n2<<"="<<n1+n2;
		break;
		case '-':
		cout<<n1<<"-"<<n2<<"="<<n1-n2;
		break;
		case '*':
		cout<<n1<<"*"<<n2<<"="<<n1*n2;
		break;
		case '/':
		cout<<n1<<"/"<<n2<<"="<<n1/n2;
		break;
		default:
		cout<<"Error";
		break;
	}
	return 0;
}