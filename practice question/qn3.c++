//No-parameterized Constructor in single inheritance
#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class constructor"<<endl;
    }
    ~base(){
        cout<<"Base class destructor"<<endl;
    }
};
class child: public base{
    public:
    child(){
        cout<<"Child class constructor"<<endl;
    }
    ~child(){
        cout<<"Chils class destructor"<<endl;
    }
};
int main(){
    child c;
    return 0;
}