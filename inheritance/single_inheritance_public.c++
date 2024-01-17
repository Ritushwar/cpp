//Single Inheritance Public
#include<iostream>
using namespace std;
class base{
    int a;   //private data it will not inheritable
    public:
    int b;   //public will be inheritable
    void set_ab(void);
    int get_a(void);
    void show_a(void);
};
class D: public base{
    int c;
    public:
    D(){}
    void mul(void);
    void display(void);
};
void base::set_ab(void){
    a=10;
    b=20;
}
int base::get_a(void){
    return a;
}
void base::show_a(void){
    cout<<"Value of a is: "<<a<<endl;
}
void D::mul(void){
    c = get_a() *b;
}
void D::display(void){
    cout<<"Value of a: "<<get_a()<<endl;   //get_a() is the function of class base but used by D class m-function
    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of c: "<<c<<endl;
}
int main(){
    D d1;       
    d1.set_ab(); //d1 is the object of class D but it have an access to the public member function of base class
    d1.mul();    
    d1.display();
    d1.b = 30;  //b is the data memmber of class base
    d1.mul();
    d1.display();
    return 0;
}