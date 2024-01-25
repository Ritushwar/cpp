//Multiple inheritance in c++
#include<iostream>
using namespace std;
class m{
    protected:
    int a;
    public:
    void set_a(int x){
        a = x;
    }
};
class n{
    protected:
    int b;
    public:
    void set_b(int x){
        b = x;
    }
};
class p: public m, public n{     //p is publicly inheritaded of class m and class n
    int c;
    public:
    void set_c(int x){
        c = x;
    }
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
    }
};
int main(){
    p p1;
    p1.set_a(100);
    p1.set_b(20);
    p1.set_c(80);
    p1.display();
    return 0;
}