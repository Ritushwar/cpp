//Unary Operator Overloading in c++
#include<iostream>
using namespace std;
class sample{
    int x;
    float y;
    double z;
    public:
     void getdata(int, float, double);
     void display();
     void operator++();              //Overloading Unary operator
};
void sample::getdata(int a, float b, double c){
    x=a;
    y=b;
    z=c;
}
void sample::display(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    cout<<"Z: "<<z<<endl;
}
void sample::operator++(){
    x= ++x;
    y= ++y;
    z= ++z;
}
int main(){
    sample s1;
    int value = 20;
    s1.getdata(10,12.3f,14.2345);
    cout<<"Before Overloading"<<endl;
    s1.display();
    ++s1;
    ++value;   //Original meaning of operator doesnot change even though it is overloaded
    cout<<"After Overloading"<<endl;
    s1.display();
    cout<<"Value: "<<value<<endl;
    return 0;
}