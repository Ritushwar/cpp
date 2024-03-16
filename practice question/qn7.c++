//Constructor and destructor in hierarchical inheritance
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Cons of A"<<endl;
    }
    ~A(){
        cout<<"Des of A"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"Cons of B"<<endl;
    }
    ~B(){
        cout<<"Des of B"<<endl;
    }
};
class C: public A{
    public:
    C(){
        cout<<"Cons of C"<<endl;
    }
    ~C(){
        cout<<"Des of C"<<endl;
    }
};
int main(){
    C c;
    B b;
    return 0;
}