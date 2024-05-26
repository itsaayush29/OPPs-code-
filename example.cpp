#include<iostream>
using namespace std;

class A{
    public:
    int l,b;
    void show(){
        cout<<l<<endl;
        cout<<b<<endl;
    }
};
class B : public A
{
    public:
    int h;
    void show1(){
        cout<<h<<endl;
    }
};
int main(){
    //A obj1;
    B ob;
    ob.l = 10;
    ob.b = 20;
    ob.h = 40;
    ob.show();
    ob.show1();
    return 0;
}