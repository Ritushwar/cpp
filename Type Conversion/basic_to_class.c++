//Basic(built_in_type) to Class Type Conversion
#include<iostream>
using namespace std;
class Time{
    int hrs;
    int min;
    public:
    Time(){}                   //default constructor
    Time(int);
    void display();
};
Time::Time(int tm){
    hrs = tm/60;
    min = tm%60;
}
void Time::display(){
    cout<<hrs<<" Hours "<<min<<" Minutes"<<endl;
}
int main(){
    Time T1;
    int t;
    cout<<"Enter the time in minutes: ";
    cin>>t;
    T1 = t;            //built in to class type conversion just like float_type = int_type
    T1.display();
    return 0;
}