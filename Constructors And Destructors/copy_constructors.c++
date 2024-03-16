//copy constructors
#include<iostream>
using namespace std;
class demo{
    int x;
    double y;
    public:
     demo(int, double);         //parameterized constructor
     demo(demo&);              //copy constructor
     void display();
};
demo::demo(int a, double b){
    x=a;
    y=b;
}
demo::demo(demo &c){
    x=c.x;
    y=c.y;
}
void demo::display(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}
int main(){
    demo d1(100,29.999);
    demo d2(d1);            //copy constructors
    d1.display();
    d2.display();
    return 0;
}