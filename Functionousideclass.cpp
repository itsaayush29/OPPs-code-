#include<iostream>
using namespace std;

class myclass{                    //defining the class
    public:                       //Access specifier
        void fun();                // Method/function declaration

};
 // Method/function definition outside the class
void myclass::fun(){                //(::) = Scope resolution used to define function ouside the class 
    cout<<"Hello World";
}
int main(){
  myclass obj;                    // Create an object of MyClass
  obj.fun();                      // Call the method
  return 0; 
}
