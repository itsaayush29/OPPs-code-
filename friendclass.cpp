#include<iostream>
using namespace std;
class base{
    private:
    int a;
    public:
    base(int arg){
        a=arg;
    }
    friend class base1;
};
class base1{
    private:
    int b;
    public:
    base1(int arg){
        b=arg;
    }
     void sum(){
        int x;
        base obj(50);
        //obj.a;
        x = obj.a+ b;
        cout<< "x = "<<x;
     }
};
int main(){
    base1 obj1(50);
    obj1.sum();
}