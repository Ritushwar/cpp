//Define a class Distance with member funtion meter, cm and member function. Overload binary operator to
//add two object of same class
#include<iostream>
using namespace std;
class Distance{
    int meter;
    int cm;
    public:
    void read(){
        cout<<"Enter m: ";
        cin>>meter;
        cout<<"Enter cm: ";
        cin>>cm;
    }
    void display(){
        cout<<meter<<" meter "<<cm<<" cm"<<endl;
    }
    Distance operator+(Distance d1){
        Distance temp;
        temp.cm = cm + d1.cm;
        temp.meter = meter + d1.meter + temp.cm/100;
        temp.cm = temp.cm % 100;
        return temp;
    }
};
int main(){
    Distance D1, D2, D3;
    D1.read();
    D2.read();
    D3 = D1 + D2;              //D2 is passed as argument
    D3.display();
    return 0;
}