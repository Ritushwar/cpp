//default arguments in template
#include<iostream>
using namespace std;
template<class T=int> //by default int
class area{
    T length, breadth;
    public:
    area(T l, T b){
        length = l;
        breadth = b;
    }
    T calc_area(){
        T ar;
        ar = length*breadth;
        return ar;
    }
};
int main(){
    area<float>f1(10.89, 6.7);
    area<>f2(10,12);
    cout<<f1.calc_area()<<endl;
    cout<<f2.calc_area()<<endl;         //by default int
    return 0;
}