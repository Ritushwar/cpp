//derived class template in c++
#include<iostream>
using namespace std;
template<class T>
class A{
    protected:
    T x;
};
template<class T>
class B: public A<T>{
    public:
    T func(T args){
        this->x = args;
        return this->x;
    }
};
int main(){
    B<float>obj1;
    cout<<"x = "<<obj1.func(8.567);
    return 0;
}