#include<iostream>
using namespace std;

class A{
    private:
    string name;
    int age;
    float height;
    public:
    A(string n,int a,float h) {
        name = n;
        age = a;
        height = h;
    }
    int data(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Height = "<<height<<endl;

    }
};
int main(){
A obj("Aayush gupta",18,5.6f);
obj.data();
return 0;

} 