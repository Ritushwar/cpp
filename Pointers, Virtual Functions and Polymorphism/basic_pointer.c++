//basic of pointers in c++
#include<iostream>
using namespace std;
int main(){
    int a, *ptr1,*ptr3, **ptr2;   //ptr2 is a pointer pointing to pointer
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"Address of a: "<<ptr1<<endl;
    cout<<"Address of ptr1: "<<ptr2<<endl;
    cout<<endl;
    cout<<"After incrementing"<<endl;
    ptr1+=2;
    ptr3 = &a;
    cout<<"Address of a: "<<ptr1<<endl;
    cout<<"Actual address of a: "<<ptr3<<endl;
    ptr2+=2;
    cout<<"Address of ptr1: "<<ptr2<<endl;
    return 0;
}