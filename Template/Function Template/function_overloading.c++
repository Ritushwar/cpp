//function overloading in function template
#include<iostream>
using namespace std;
template<class T>
T find_max(T a, T b){
    if(a>b)
    return a;
    else
    return b;
}
template<class T>
T find_max(T a, T b, T c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b; 
    }
    else{
        return c;
    }
}
int main(){
    int a, b, c;
    cout<<"Enter any three integer: "<<endl;
    cin>>a>>b>>c;
    cout<<"Max among two number: "<<find_max(a,b)<<endl;
    cout<<"Max among three number: "<<find_max(a,b,c)<<endl;
    return 0;
}