//WAP to convert of object of class with data member feet inch into meter
//type conversion from class to basic
#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inch;
    public:
    void read(){
        cout<<"feet: ";
        cin>>feet;
        cout<<"inch: ";
        cin>>inch;
    }
    operator float(){
        float temp;
        inch = inch + feet*12;
        temp = inch / 39.37;
        return temp;
    }
};
int main(){
    Distance d1;
    d1.read();
    float meter;
    meter = d1;
    cout<<meter<<" meter"<<endl;
    return 0;
}