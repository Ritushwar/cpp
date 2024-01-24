//binary overloading using member function
#include<iostream>
using namespace std;
class Distance{
    int m, cm;
    public:
    void get_data(){
        cout<<"m: ";
        cin>>m;
        cout<<"cm: ";
        cin>>cm;
    }
    void display(){
        cout<<m<<" m "<<cm<<" cm"<<endl;
    }
    Distance operator+(Distance);
};
Distance Distance::operator+(Distance d1){
    Distance temp;
    temp.cm = cm + d1.cm;
    temp.m = m + d1.m + temp.cm/100;
    temp.cm = temp.cm%100;
    return temp;
}
int main(){
    Distance D1, D2, D3;
    D1.get_data();
    D2.get_data();
    D3 = D1 + D2;
    D3.display();
    return 0;
}