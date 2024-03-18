//exception with argument
#include<iostream>
using namespace std;
class Exception{
    int i;
    float f;
    char c;
    friend int main();
};
int main(){
    Exception e;
    try{
    //e.i = 1;
    e.f = 1.1;
    throw e;
    }
    catch(Exception obj){
        if(obj.f==1.1){
            cout<<"Float exception is caught"<<endl;
        }
        if(obj.i==1){
            cout<<"Integer exception is caught"<<endl;
        }
    }
}