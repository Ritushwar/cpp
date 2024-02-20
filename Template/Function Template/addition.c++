//Add two type of the number using function template
#include<iostream>
using namespace std;
template<class T>
T addition(T p, T q){
    T sum;
    sum = p + q;
    return sum;
}
int main(){
    int a=10, b=20, sumi;
    float c=13.456, d=199.567, sumf;
    sumi = addition(a,b);
    sumf = addition(c,d);
    cout<<"Sum of two integer is: "<<sumi<<endl;
    cout<<"Sum of two float is: "<<sumf<<endl;
    return 0;
}
