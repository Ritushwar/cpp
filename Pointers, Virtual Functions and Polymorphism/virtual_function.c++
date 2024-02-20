//Virtual function(Run time polymorphism)
#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};
class der: public base{
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    base *bptr;
    base bb;
    bptr = &bb;
    cout<<"Base class object is assign to pointer"<<endl;
    bptr->show();
    der dd;
    bptr = &dd;
    cout<<"Derrived class object is assign to pointer"<<endl;
    bptr->show();
    return 0;
}