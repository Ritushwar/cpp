//to handle divide by Zero exception using the concept of exception handling
#include<iostream>
using namespace std;
int  main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    int x = a-b;
    try{
        if(x!=0){
            cout<<"a/x: "<<a/x<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Exception occur"<<endl;
        cout<<"x= "<<i<<endl;
    }
    return 0;
};