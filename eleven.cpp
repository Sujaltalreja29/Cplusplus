#include<iostream>
using namespace std;
class student
{
public:
    int rollno;
    char name[20];
public:
    void get()
    {
        cout<<"Enter name and rollno:";
        cin>>name>>rollno;
    }
};
class exam:public student
{
public:
    int m[5];
    int total;

    void get1()
    {
        cout<<"\nEnter marks of 5 subjects:";
        for(int i=0; i<5; i++)
            cin>>m[i];
    }
};
class result:public exam
{
    public:
    int total=0,avg=1;
    void display()
    {
        get();
        get1();
        total=m[0]+m[1]+m[2]+m[3]+m[4];
        avg=total/5;
        cout<<"\nName"<<"\t"<<"rollno"<<"\t"<<"M1"<<"\t"<<"M2"<<"\t"<<"M3"<<"\t"<<"M4"<<"\t"<<"M5"<<"\t"<<"total"<<"\t"<<"Average";
        cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<m[3]<<"\t"<<m[4]<<"\t"<<total<<"\t"<<avg;
    }
};
int main()
{
    result r;
    r.display();
    return 0;
}
