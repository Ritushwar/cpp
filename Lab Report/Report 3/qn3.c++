//WAP to illustrtate the use of this pointer
#include<iostream>
using namespace std;
class test{
    int a;
    public:
    test& set_data(int a){
        this->a = a;
        cout<<"Object: "<<this<<endl;
        return *this;   //this will return object
    }
    void show_value(void){
        cout<<"Value: "<<a<<endl;
    }
};
int main(){
    test t1, t2, t3;
    t1.set_data(100).show_value();
    t2.set_data(200).show_value();
    t3.set_data(300).show_value();
    return 0;
}