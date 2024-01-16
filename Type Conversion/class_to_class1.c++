//Class to class data type conversion
#include<iostream>
using namespace std;
class Time1;
class Time2{
    int hrs;
    int min;
    public:
    Time2(){}
    void getdata();
    operator int();
};
class Time1{
    int hours;
    int minutes;
    public:
    Time1(){}
    Time1(int);
    void display();
};
Time1::Time1(int m){
    hours = m/60;
    minutes = m%60;
}
void Time1::display(){
    cout<<hours<<" Hours "<<minutes<<" Minutes"<<endl;
}
void Time2::getdata(){
    cout<<"Enter time in hours: ";
    cin>>hrs;
    cout<<"Enter time in min: ";
    cin>>min;
}
Time2::operator int(){
    int t = hrs*60 + min;
    return t;
}
int main(){
    Time2 T2;
    Time1 T1;
    T2.getdata();
    int x;
    x=T2;
    T1 = x;         //just like class to class
    T1.display();
    return 0;
}