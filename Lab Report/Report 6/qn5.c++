//exception handling
#include<iostream>
using namespace std;
void calc(int a, int b){
    try{
    int x = a-b;
    if(x!=0){
        float temp = a/b;
    cout<<"a/b = "<<temp<<endl;
    }
    else{
        throw(x);
    }
     }
     catch(int i){
        cout<<"Exception was occured"<<endl;
        cout<<"Two number are equal"<<endl;
     }
}
int main(){
    int a, b;
    cout<<"Enter any two integer: "<<endl;
    cin>>a>>b;
    calc(a, b);
    return 0;
}