#include<iostream>
using namespace std;

class rectangle{
    public:
    int l,b;
    void show(){
        cout<<"Lenght = "<<l<<endl;
        cout<<"Breadth = "<<b<<endl;
        cout<<"Area of rectange = "<<l*b<<endl;
    }
};
class cuboid : public rectangle
{
    public:
    int h;
    void show1(){
        cout<<"Height = "f<<h<<endl;
        cout<<"Volume of cuboid = "<<l*b*h<<endl;
    }
};
int main(){
    //A obj1;
    cuboid ob;
    ob.l = 10;
    ob.b = 20;
    ob.h = 40;
    ob.show();
    ob.show1();
    return 0;
}