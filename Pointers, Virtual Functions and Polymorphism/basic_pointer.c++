//basic of pointers in c++
#include<iostream>
using namespace std;
int main(){
    int a, *ptr1, **ptr2;   //ptr2 is a pointer pointing to pointer
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"Address of a: "<<ptr1<<endl;
    cout<<"Address of ptr1: "<<ptr2<<endl;
    return 0;
}