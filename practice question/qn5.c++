//WAP to illustrate constructor and destructor in multiple inheritance
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int a){
        this->a = a;
        cout<<"Constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
    void show(){
        cout<<"a: "<<a<<endl;
    }
};
class B{
    int b;
    public:
    B(int b){
        this->b = b;
        cout<<"Constructor of B"<<endl;
    }
    ~B(){
        cout<<"Destructor of B"<<endl;
    }
    void show(){
        cout<<"b: "<<b<<endl;
    }
};
class C: public B, public A{
    int c;
    public:
    C(int a, int b, int c):A(a),B(b){
        this->c = c;
        cout<<"Constructor of C"<<endl;
    }
    ~C(){
        cout<<"Destructor of C"<<endl;
        }
    void show(){
        A::show();
        B::show();
        cout<<"c: "<<c<<endl;
    }
};
int main(){
    C c(9,10,11);
    c.C::show();
    return 0;
}