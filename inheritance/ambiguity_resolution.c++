//Ambiguity resolution of multiple inheritance in c++
//When the function with the same name appear in the more than one base class
#include<iostream>
using namespace std;
class A{
    int a=10;
    public:
    void display(void){
        cout<<"Value of a: "<<a<<endl;
    }
};
class B{
    int b = 20;
    public:
    void display(void){
        cout<<"Value of b: "<<b<<endl;
    }
};
class C:public A, public B{
    int c = 30;
    public:
    void display(void){
        A::display();      //calling the function of base class A solved by using :: operator
        B::display();      //calling the function of base class B
        cout<<"Value of c: "<<c<<endl;
    }
};
int main(){
    C c1;
    c1.display();
    return 0;
}