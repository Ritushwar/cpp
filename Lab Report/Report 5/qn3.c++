//WAP to illustrate the function overriding
#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun(){
        cout<<"Function of base class"<<endl;
    }
};
class der: public base{
    public:
    void fun(){   //function with same name and arguments in base and derived class both
        cout<<"Derived class function"<<endl;
    }
};
int main(){
    base *ptr;
    der d1;
    ptr = &d1;
    d1.fun();
    ptr->fun();
    d1.base::fun();
    return 0;
}