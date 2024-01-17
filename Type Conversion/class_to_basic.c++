//Class to Basic Type Conversion
#include<iostream>
using namespace std;
class Time{
    int hrs;
    int min;
    public:
    void get();
    Time(){}
    operator int();
};
void Time::get(){
    cout<<"Enter Hours: ";
    cin>>hrs;
    cout<<"Enter Minutes: ";
    cin>>min;
}
Time::operator int(){
    int t;
    t=hrs*60 + min;
    return t;
}
int main(){
    Time T1,T2;
    T1.get();
    T2.get();
    int x,y;
    x = T1;           //converting class data type to int data type
    y = T2;
    cout<<x<<" Minutes"<<endl;
    cout<<y<<" Minutes"<<endl;
    return 0;
}