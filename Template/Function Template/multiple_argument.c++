//Multiple argument in class template
#include<iostream>
using namespace std;
template<class T1, class T2, class T3>
void calculate_size(T1 a, T2 b, T3 c){
    cout<<"Size of a: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Size of b: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Size of c: "<<sizeof(c)<<" bytes"<<endl;
}
int main(){
    calculate_size(1, 1.456, 'r');
    return 0;
}