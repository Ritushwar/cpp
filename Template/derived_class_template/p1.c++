//template in derived type
#include<iostream>
using namespace std;
template<class T>
class A{
    protected:
    int x;
};
template<class T>
class B: public A<T>{
    public:
    T set_data(T x){
        this->x = x;
        return this->x;
    }
};
int main(){
    B<float>b1;
    cout<<"x = "<<b1.set_data(5.6)<<endl;
    return 0;
}