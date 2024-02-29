//class template
#include<iostream>
using namespace std;
template<class T>
class sample{
    T length;
    T breadth;
    public:
    sample(){}    //default constructor
    sample(T a, T b){
        length = a;
        breadth = b;
    }
    T area(){
        return length*breadth;
    }
};
int main(){
    sample<int>ri(4,5);
    sample<float>rf(4.5, 7.8);
    cout<<"Area from int: "<<ri.area()<<endl;
    cout<<"Area from float: "<<rf.area()<<endl;
    return 0;
};