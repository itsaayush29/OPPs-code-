#include<iostream>
using namespace std;

class myclass{          //The Class
    public:             //Access specifier 
    int mynum;          //Attribute
    string name;        //Attribute
};
int main(){
    myclass object;     //Create an object of myclass
     // Access attributes and set values
    object.mynum = 50;
    object.name = "Aayush";
    //Print value
    cout<< object.mynum<<endl;
    cout<<object.name;
    return 0;
}