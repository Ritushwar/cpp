//Uncaught exception in c++
#include<iostream>
using namespace std;
void ter(){
    cout<<"Exception uncaught"<<endl;
    exit(0);
}
int main(){
    cout<<"Inside main block"<<endl;
    try{
        cout<<"Inside the try block"<<endl;
        set_terminate(ter);
        throw 5;
    }
    catch(float n){
        cout<<"Float exception caught"<<endl;
    }
    return 0;
}