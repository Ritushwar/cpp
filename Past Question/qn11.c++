/*WAP in c++ to create a derive class which is a template from the a base class which is also a 
template with additional template parameters in the derived class than that of the base class.*/
#include<iostream>
using namespace std;
template<class T>
class base{
    protected:
    T x;
    public:
    base(T x){
        this->x = x;
    }
};
template<class T, class U>
class der1:public base<T>{
    U c;
    public:
    der1(T a, U b):base<T>(a){
        c = b;
    }
    void show(){
        cout<<"Value of x is "<<this->x<<endl;
        cout<<"Value of c is "<<c<<endl;
    }
};
int main(){
    der1<int,char>d1(10,'A');
    d1.show();
    return 0;
}