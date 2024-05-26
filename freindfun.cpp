#include<iostream>
using namespace std;
class base{
    private:
    int a1;
    public:
    base(int arg){
        a1=arg;
    }
    friend void fun();
};
class base1{
    private:
    int b1;
    public:
    base1(int arg){
        b1=arg;
    }
    friend void fun();
};
void fun(){
    base a(10);
    base1 b(10);
    //int x;
    
   // x = a.a1 + b.b1;
    int x = a.a1 + b.b1;
    cout<<"X = "<<x;
}
int main()
{
    fun();
}