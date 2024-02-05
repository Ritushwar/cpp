//Manipulation of pointer
#include<iostream>
using namespace std;
int main(){
    int a =30;
    int *ptr;
    ptr = &a;
    cout<<"Value of a is: "<<*ptr<<endl;
    *ptr = *ptr + a;
    cout<<"Revised value of a is: "<<*ptr<<endl;
    return 0;
}