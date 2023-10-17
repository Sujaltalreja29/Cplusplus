#include<iostream>
using namespace std;
int swap1(int a,int b){
    int c=b;
    b=a;
    a=c;
}
int ref(int a,int b){
    int c=b;
    b=a;
    a=c;
}
int main(){
    int a=5,b=10;
    rep(a,b);
    cout<<"value of a:"<<a<<"value of b:"<<b;
    swap(&a,&b);
     cout<<"value of a:"<<a<<"value of b:"<<b;
    return 0;
}