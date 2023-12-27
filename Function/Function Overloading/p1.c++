//Calculating area of the square, rectangle and circle using function overloading
#include<iostream>
#include<iomanip>
using namespace std;
int area(int a){
    return(a*a);
}
int area(int a, int b){
    return(a*b);
}
float area(float r){
    return 3.142*r*r;
}
int main(){
    cout<<"Calculating the area of square"<<endl;
    cout<<area(10)<<endl;
    cout<<"Calculating the area of rectangle"<<endl;
    cout<<area(10,12)<<endl;
    cout<<"Calculating the area of Circle"<<endl;
    cout<<area(5.6f)<<endl;
    return 0;
}