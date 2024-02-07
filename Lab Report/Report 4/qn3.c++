//Repeat program using friend function
#include<iostream>
using namespace std;
class Distance{
    int m;
    int cm;
    public:
    void read();
    void display();
    friend Distance operator+(Distance, Distance);
};
void Distance::read(){
    cout<<"meter: ";
    cin>>m;
    cout<<"cm: ";
    cin>>cm;
}
Distance operator+(Distance d1, Distance d2){
    Distance temp;
    temp.cm = d1.cm + d2.cm;
    temp.m = d1.m + d2.m + temp.cm/100;
    temp.cm = temp.cm % 100;
    return temp;
}
void Distance::display(){
    cout<<m<<" meter "<<cm<<" cm"<<endl;
}
int main(){
    Distance D1, D2, D3;
    D1.read();
    D2.read();
    D3 = D1 + D2;    //D1 and D2 is passed as argument
    D3.display();
    return 0;
}
