//Pure Virtual function in c++
#include<iostream>
using namespace std;
class base{  //cannot create object from abstract class
    public:
    virtual void display() = 0;  //pure virtual function
};
class der1:public base{
    public:
    void display(){
        cout<<"Exectued from der1"<<endl;
    }
};
class der2:public base{
    public:
    void display(){
        cout<<"Executed from der2"<<endl;
    }
};
int main(){
    base *bptr;
    der1 d1;
    bptr = &d1;
    bptr->display();
    der2 d2;
    bptr = &d2;
    bptr->display();
    return 0;
}