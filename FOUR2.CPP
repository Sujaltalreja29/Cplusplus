#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
    char name[20];
    float anum,wam,bam;
public:
    float  dp,wid;
    void getdata()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"\nEnter account number:";
        cin>>anum;
        cout<<"\nEnter widthdrawal amount";
        cin>>wam;
        cout<<"\nEnter balance:";
        cin>>bam;
    }
    void deposit()
    {
        cout<<"\nEnter the amount to deposit:";
        cin>>dp;
        bam=bam+dp;
        cout<<"\nAmount deposited.Now balance is:"<<bam;
    }
    void withdraw()
    {
        cout<<"\nEnter withdrawal amount:";
        cin>>wid;
        cout<<"\nChecking balance...";
        if(wid<=bam && wid<=wam)
        {
         bam=bam-wid;
         cout<<"\nAmount is withdrawn.";
        }
        else
        {
            cout<<"\nInsufficient balance";
        }
    }
    void display()
    {
        cout<<"\nName:"<<name<<"\tBalance:"<<bam;
    }
};
int main()
{
    bank b;
    b.getdata();
    b.deposit();
    b.withdraw();
    b.display();
    getch();
}
