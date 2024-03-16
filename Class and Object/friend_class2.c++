//SUM two complex object using the concept of friend class
#include<iostream>
using namespace std;
class sumcomplex;
class complex{
    float real;
    float img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(float r, float i){
        real = r;
        img = i;
    }
    void show_data(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    friend class sumcomplex;               //sumcomplex can access the property of complex
};
class sumcomplex{
    public:
    complex add(complex c1, complex c2){
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }
};
int main(){
    complex c1(12.45, 1.89), c2(7.55,1.11), c3;
    sumcomplex sc;
    c3 = sc.add(c1, c2);
    c3.show_data();
    return 0;
}