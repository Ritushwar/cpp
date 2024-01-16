//overloading of the subscript[] operator
#include<iostream>
using namespace std;
class arr{
    int a[5];
    public:
    arr(int *s);
    int operator [](int);
};
arr::arr(int *s){
    for(int i=0;i<5;i++){
        a[i] = s[i];
    }
}
int arr::operator[](int j){
    return a[j];
}
int main(){
    int x[5] = {10,11,12,13,14};
    arr a1(x);
    for(int k=0;k<5;k++){
        cout<<a1[k]<<endl;      //this will call operator[] overloading function
    }
    return 0;
}