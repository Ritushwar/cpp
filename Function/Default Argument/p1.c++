#include<iostream>
using namespace std;
 float calculate(float mass, float height, float g=9.8){
    return mass*g*height;
 }
 int main(){
    float m,h,PE;
    cout<<"Calculating Potential Energy"<<endl;
    cout<<"Enter mass and height: "<<endl;
    cin>>m>>h;
    PE = calculate(m,h);
    float PE2 = calculate(m,h,10); //value of g will be overwrite and become 10
    cout<<"Potential Energy when g is 9.8 is: "<<PE<<endl;
    cout<<"Potential Energy when g is 10 is: "<<PE2<<endl;
    return 0;
 }