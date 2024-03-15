//WAP to overload insertion(<<) and extraction(>>) operation for object input and output using friend function
#include<iostream>
using namespace std;
class complex{
    float real, img;
    public:
    complex(){};
    friend istream& operator >>(istream&, complex&);
    friend ostream& operator <<(ostream&, const complex&);
};
istream& operator >>(istream & take, complex & c){
    cout<<"Enter complex number"<<endl;
    take>>c.real;
    take>>c.img;
}
ostream& operator <<(ostream &show,const complex & c){
    show<<c.real<<" + "<<c.img<<"i"<<endl;
}
int main(){
    complex c1, c2, c3;
    cin>>c1>>c2>>c3;
    cout<<c1<<c2<<c3;
    return 0;
}