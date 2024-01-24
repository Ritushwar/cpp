//Single inheritance private in c++
#include<iostream>
using namespace std;
class Base{
  int a;
  public:
  int b;    //inheritaded as private data 
  public:
  void set_ab(int, int);    //private member function in derived class
  int get_a();              //private member function in derived class
  void show_a();            //private member function in derived class
};
class der: private Base{
    int c;
    public:
    void mul();
    void display();
};
void Base::set_ab(int a, int b){
    this->a = a;
    this->b = b;
}
int Base:: get_a(){
    return a;
}
void Base::show_a(){
    cout<<"a: "<<a<<endl;
}
void der::mul(){
    set_ab(100,5);        //member function can only access private member function
    c = get_a()*b;
}
void der::display(){
    cout<<"a: "<<get_a()<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}
int main(){
    der d1;
    //d1.set_ab(100,5);   inaccessible
    //d1.show_a();        inaccessible
    d1.mul();
    d1.display();
    return 0;
}