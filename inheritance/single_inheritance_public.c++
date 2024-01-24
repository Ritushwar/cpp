//Single Inheritance public in c++
#include<iostream>
using namespace std;
class Base{
    int a;         //private not inheritable
    public:
    int b;
    void set_ab();
    int get_a();
    void show_a(void);
};
class der:public Base{     //der is the publicly derived of class Base
    int c;
    public:
    void mul();
    void display();
};
void Base::set_ab(){
    a = 10;
    b = 20;
}
int Base::get_a(){
    return a;
}
void Base::show_a(){
    cout<<"a: "<<a<<endl;
}
void der::mul(){
    c = get_a()*b;
}
void der::display(){
    cout<<"a: "<<get_a()<<endl;      //publicly inheritable
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}
int main(){
    der d1;
    d1.set_ab();                   //this is function of Base class
    d1.show_a();                   //function of base class used by der class
    d1.mul();
    d1.display();
    return 0;
}