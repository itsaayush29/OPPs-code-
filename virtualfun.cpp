/*Program that appears to be calling a function of one class
may in reality be calling a function of different class is called as Virual function*/
#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun(){
        cout<<"\nBase";
    }
};
class der1:public base{
    public:
    virtual void fun(){
        cout<<"\nDer1";
    }
};
class der2:public base{
    public:
    void fun(){
        cout<<"\nDer2";
    }
};
int main(){
    base obj;
    obj.fun();
    base *ptr; 
    ptr =  new der1();
    ptr->fun();
    ptr = new der2();
    ptr->fun();
}