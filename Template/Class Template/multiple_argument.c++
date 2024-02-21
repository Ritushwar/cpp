//class template with multiple argument
#include<iostream>
using namespace std;
template<class T1, class T2>
class Distance{
    T1 feet;
    T2 inch;
    public:
    Distance(){}
    Distance(T1 a, T2 b){
        feet = a;
        inch = b;
    }
    void show(){
        cout<<"Distance is "<<feet<<" feet "<<inch<<" inch"<<endl;
    }
};
int main(){
    Distance<int, float>d1(5,6.7);
    Distance<int, int>d2(8,9);
    Distance<float,float>d3(8.9, 3.4);
    Distance<float, int>d4(4, 6.7);   //only 4 and 6 will be passed
    d1.show();
    d2.show();
    d3.show();
    d4.show();
    return 0;
}