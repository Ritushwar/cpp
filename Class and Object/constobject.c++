//Concept of constant object and constant member function
#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
    public:
    complex(){
        real = 0;
        img = 0;
    }          //default constructor
    complex(float, float);
    void show_data() const;    //constant member function
};
complex::complex(float r, float i){
    real = r;
    img = i;
}
void complex::show_data() const{
    cout<<real<<" + "<<img<<"i"<<endl;
}
int main(){
    complex c1;
    complex c2(12.45, 45.78);
    const complex c3(34.56, 67.89);
    c1.show_data();
    c2.show_data();
    c3.show_data();
    return 0;
}