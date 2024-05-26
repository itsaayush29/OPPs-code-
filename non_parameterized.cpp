#include<iostream>
using namespace std;

class A{
    private:
    string name;
    int age;
    float height;
    public:
    A() {
        name = "Aayush Gupta";
        age = 18;
        height = 5.4f;
    }
    int data(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Height = "<<height<<endl;

    }
};
int main(){
A obj;
obj.data();
return 0;

}