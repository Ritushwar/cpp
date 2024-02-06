//Pointer to function
//passing function address to pointer then invoke it
#include<iostream>
using namespace std;
using funptr = void(*)(int, int);
void add(int a, int b){
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
void sub(int i, int j){
    cout<<i<<" - "<<j<<" = "<<i-j<<endl;
}
int main(){
    funptr ptr;
    ptr = &add;
    ptr(4,5);
    ptr = &sub;
    ptr(10,5);
    return 0;
}