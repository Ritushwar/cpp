//Constructors in derived class
#include<iostream>
using namespace std;
class alpha{
    int x;
    public:
    alpha(int i){
        x = i;
        cout<<"alpha is initialized"<<endl;
    }
    void show_x(void){
        cout<<"x: "<<x<<endl;
    }
};
class beta{
    float y;
    public:
    beta(float j){
        y = j;
        cout<<"beta is initialized"<<endl;
    }
    void show_y(void){
        cout<<"Y: "<<y<<endl;
    }
};
class gama: public beta, public alpha{ //constructors are executed in the order of inheritance
    int m, n;
    public:
    gama(int a, float b, int c, int d):   //derived class need to pass arguments for having multiple arguments
      alpha(a), beta(b){   // base class constructors is called first
        m = c;
        n = d;
        cout<<"Gama is initialized"<<endl;
    }
    void show_mn(void){
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
    }
};
int main(){
    gama g(3, 4.5, 6, 7);
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}