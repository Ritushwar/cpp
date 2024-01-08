//Accessing the private data of one class using another class member function
#include<iostream>
using namespace std;
class first{
    int x;
    public:
    first(int a){
        x=a;
    }
    friend class second;
};
class second{
    public:
    void disp(first f){
        cout<<"Value of X is: "<<f.x<<endl;
    }
};
int main(){
    first f1(100);
    second s1;
    s1.disp(f1);
    return 0;
}