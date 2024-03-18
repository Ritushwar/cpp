//Parameterized constructor in single inheritance
#include<iostream>
using namespace std;
class base{
    int y;
    public:
    base(int a){
        y =a;
        cout<<"Base constructor"<<endl;
    }
    ~base(){
        cout<<"Base destructor"<<endl;
    }
    void show(){
        cout<<"y: "<<y<<endl;
    }
};
class child:public base{
    public:
    child(int b):base(b){
        cout<<"Child constructor"<<endl;
    }
    ~child(){
        cout<<"Child destructor"<<endl;
    }
};
int main(){
    child c1(10);
    c1.show();
    return 0;
}