//multiple exception using catch statements
#include<iostream>
using namespace std;
void calc(int x){
    try{
    if(x==1)
    throw(x);
    else if(x==-1)
    throw -1.0;
    else if(x==0)
    throw 'x';
    }
    catch(...){
        cout<<"Exception was occured"<<endl;
    }
}
int main(){
    calc(1);
    calc(-1);
    calc(0);
    return 0;
}