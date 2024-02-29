//implement multiple catch statements
#include<iostream>
using namespace std;
void test(int x){
 try{
    if(x==1)
    throw(x);
    else if(x==-1)
    throw 1.0;
    else if(x==0)
    throw 'x';
 }
 catch(int x){
    cout<<"Integer was caught"<<endl;
 }
 catch(double x){
    cout<<"Double was caught"<<endl;
 }
 catch(char c){
    cout<<"Character was caught"<<endl;
 }
}
int main(){
    cout<<"Testing multiple catches"<<endl;
    test(1);
    test(0);
    test(-1);
    return 0;
}