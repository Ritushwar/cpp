//Un_expected exception
#include<iostream>
#include<cstdlib>
using namespace std;
void pro(){
    cout<<"Unexpected exception is occured"<<endl;
    exit(0);
}
int main()throw(int,float){
    cout<<"Inside the main block"<<endl;
    try{
        cout<<"Inside the try block"<<endl;
        set_unexpected(pro);
        throw 'z';
    }
    catch(int n){
        cout<<"Integer exception"<<endl;
    }
    catch(float f){
        cout<<"Float exception"<<endl;
    }
    return 0;
}