//WAP in CPP to overload the streaming operator(olny perform by friend function)
#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
    public:
    complex(){}
    friend istream& operator >>(istream & in, complex&c){
        in>>c.real;
        in>>c.img;
        return in;
    }
    friend ostream& operator <<(ostream& out, complex&c){
        out<<c.real<<" + i"<<c.img<<endl;
        return out;
    }
};
int main(){
    complex c1, c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}