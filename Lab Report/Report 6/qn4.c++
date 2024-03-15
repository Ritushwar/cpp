//overloading normal function with template function
#include<iostream>
using namespace std;
int min(int x, int y, int z){
    cout<<"Normal function is called"<<endl;
    if(x<y&&x<z){
        return x;
    }
    else if(y<x&&z<y){
        return y;
    }
    else
    return z;
}
template<class T>
T min(T a, T b, T c){
    cout<<"Template function is called"<<endl;
    if(a<b && a<c)
    return a;
    else if(b<a && b<c)
    return b;
    else
    return c;
}
int main(){
    int a, b, c;
    cout<<"Enter three integer: ";
    cin>>a>>b>>c;
    cout<<min(a,b,c)<<endl;
    return 0;
}