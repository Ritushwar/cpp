//Overloading Binary Operator using Friend Function
#include<iostream>
using namespace std;
class sample{
    int x;
    public:
     void read();
     void display();
     friend sample operator *(sample, sample);
};
void sample::read(){
    cout<<"Enter the Value: ";
    cin>>x;
}
void sample::display(){
    cout<<"Value is: "<<x<<endl;
}
sample operator*(sample s1, sample s2){
    sample temp;
    temp.x = s1.x * s2.x;
    return temp;
}
int main(){
    sample X, Y, Z;
    X.read();
    Y.read();
    Z = X*Y;       //Z = operator*(X,Y)
    Z.display();
    return 0;
}