#include<iostream>
using namespace std;
int n;       //return by reference is possible for only global variable
int& test();   //function declaration
int main(){
    test()=10;   //value of n is assigned as 10  
    cout<<"Value of n is: "<<n<<endl;
    return 0;
}
int& test(){
    return n;   //this will return n as variable
}