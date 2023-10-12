#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
        void getPerson(string n, int a) {
            name = n;
            age = a;
        }
};

class Admin: public virtual Person {
protected:
    int exp;

public:
        void getAdmin(int e) {
            exp = e;
        }
};

class Account: public virtual Person {
protected:
    int pay;

public:
        void getAcct(int p) {
            pay = p;
        }
};

class Master: public Admin, public Account {
public:

    void get(string name, int age, int exp, int pay){
        getPerson(name, age); getAdmin(exp); getAcct(pay);
        cout<< "Data Stored" <<endl;
    }
    void display() {
        cout<< "Name: " << name <<endl;
        cout<< "Age: " << age <<endl;
        cout<< "Experience: " << exp <<endl;
        cout<< "Pay: " << pay <<endl;
    }
};

int main() {
    Master m1;
    m1.get("Pratham", 19, 10, 10000);
    m1.display();
}
