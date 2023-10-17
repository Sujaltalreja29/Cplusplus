#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char sname[10];
    int id,cpi,spi,csem;
public:
    void getdata()
    {
        cout<<"Enter name:"<<endl;
        cin>>sname;
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter CPI:"<<endl;
        cin>>cpi;
        cout<<"Enter SPI:"<<endl;
        cin>>spi;
        cout<<"Enter Current sem:"<<endl;
        cin>>csem;
    }
    void displaydata()
    {
        cout<<"Name:"<<sname<<"\tID:"<<id<<"\tCPI:"<<cpi<<"\tSPI:"<<spi<<"\tSEM:"<<csem<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.displaydata();
    getch();
}
