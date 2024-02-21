//calculate the are using the concept of class template
#include<iostream>
using namespace std;
template<class T>
class rectangle{
    T length, breadth;
    public:
    rectangle(){}
    rectangle(T a, T b){
        length = a;
        breadth = b;
    }
    T area(){
        return length * breadth;
    }
};
int main(){
    rectangle<int>ri(5,6);
    rectangle<float>rf(5.6,7.9);
    cout<<"Area of int is: "<<ri.area()<<endl;
    cout<<"Area of float is: "<<rf.area()<<endl;
    return 0;
}