//Overload ++ operator using member function
#include<iostream>
using namespace std;
class test{
    int x;
    public:
    void get_data(){
        cout<<"x: ";
        cin>>x;
    }
    void display(){
        cout<<"x: "<<x<<endl;
    }
    void operator++();
};
void test:: operator++(){
    x = ++x;
}
int main(){
    test t1;
    t1.get_data();
    cout<<"Before Overloading"<<endl;
    t1.display();
    ++t1;
    cout<<"After Overloading"<<endl;
    t1.display();
    return 0;
}