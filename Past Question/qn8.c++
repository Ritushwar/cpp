//
#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"Base class"<<endl;
    }
};
class der1:public Base{
    public:
    void show(){
        cout<<"First Derived class"<<endl;
    }
};
class der2:public Base{
    public:
    void show(){
        cout<<"Second Derived class"<<endl;
    }
};
int main(){
    der1 d1;
    d1.show();
    d1.Base::show();
    der2 d2;
    d2.show();
    return 0;
}