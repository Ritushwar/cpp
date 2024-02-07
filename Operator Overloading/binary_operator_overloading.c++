//Binary Operator Overloading  as member function
#include<iostream>
using namespace std;
class complex{
    float x,y;
    public:
    complex(){}
    complex(float, float);
    complex operator+(complex);
    void display(void);
};
complex::complex(float real, float imag){
    x=real;
    y=imag;
}
complex complex:: operator+(complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}
void complex::display(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}
int main(){
    complex c1, c2, c3;
    c1 = complex(2.4f, 4.5f);
    c2 = complex(5.6f, 5.6f);
    c1.display();
    c2.display();
    c3 = c1 + c2;                   //operator overloading is called
    c3.display();
    return 0;
}