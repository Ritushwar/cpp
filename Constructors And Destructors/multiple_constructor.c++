//Multiple constructors
#include<iostream>
using namespace std;
class sample2{
    int x,y;
    public:
     sample2();
     sample2(int,int);
     sample2(int);
     void display(void);
};
sample2::sample2(){
    x=0;
    y=0;
}
sample2::sample2(int a, int b){
    x=a;
    y=b;
}
sample2::sample2(int a){
    x=a;
    y=0;
}
void sample2::display(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}
int main(){
    sample2 s21;           //constructors 1 is called
    sample2 s22(100,150);  //constructor 2 is called
    sample2 s23(99);       //constructor 3 is called
    cout<<"Object s21:"<<endl;
    s21.display();
    cout<<"Object s22:"<<endl;
    s22.display();
    cout<<"Object s23:"<<endl;
    s23.display();
}