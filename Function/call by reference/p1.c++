#include<iostream>
#include<iomanip>
using namespace std;
void swap(int *a, int *b){  //function definition
    cout<<"First Function is called"<<endl;
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}
void swap(int &a, int &b){
    cout<<"Second function in called"<<endl;
    int temp; 
    temp = a;
    a=b;
    b=temp;
}
int main(){
    int a=10;
    int b=20;
    swap(&a,&b); //calling function by passing address
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
}