//WAP to convert meter into a type of class Distance with data member feet and inches[feet = m*3.2808]
//basic to class conversion
#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
    Distance(){}
    Distance(int);
    void display();
};
void Distance::display(){
    cout<<feet<<" feet "<<inches<<" inches"<<endl;
}
Distance::Distance(int m){
    float temp;
    feet = m *3.2808;
    temp = m*3.2808;
    inches = (temp-feet)*12;
}
int main(){
    Distance d1;
    int meter;
    cout<<"Meter: ";
    cin>>meter;
    d1 = meter;
    d1.display();
    return 0;
}