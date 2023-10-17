#include<iostream>
#include<iomanip>
using namespace std;
class item
{
    public:
    string item_name;
    int item_code,cost;
    void getdata()
    {
        cout<<"\nEnter name:";
        cin>>item_name;
        cout<<"\nEnter code:";
        cin>>item_code;
        cout<<"\nEnter cost:";
        cin>>cost;
    }
};
int main()
{
    item t[3];
    t[0].getdata();
    t[1].getdata();
    t[2].getdata();
    cout
        << left
        << setw(20)
        << "Name"
        << left
        << setw(5)
        << "Code"
        << left
        << setw(5)
        << "Cost"
        << endl;
for (int i = 0; i < 3; i++)
    {
        cout
            << left
            << setw(20)
            << t[i].item_name
            << left
            << setw(5)
            << t[i].item_code
            << left
            << setw(5)
            << t[i].cost
            << endl;
    }
    return 0;
}
