#include<iostream>
using namespace std;
 class myclass{
    public:
    int length,breadth;
    void measure(int x,int y){
        length = x;
        breadth = y;
    }
    
        void area(){
        cout<<"The area is = "<<length*breadth;
    }

 };
 int main(){
    myclass A;
    A.measure(500,30);
    A.area();
    return 0;
 }