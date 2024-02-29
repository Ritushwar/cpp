//swap two value using function template
#include<iostream>
using namespace std;
template<class T1>
void Swap(T1 &a, T1 &b){
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a, b;
    cout<<"Eneter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Before swapping value: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    Swap(a,b);
    cout<<"After swapping value: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
};
