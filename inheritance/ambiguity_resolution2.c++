//Ambiguity resolution in single inheritance
/*If there is a function of same name in base and derived class then derived class function overrides
 the base class function */
#include<iostream>
using namespace std;
class Base{
    protected:
    int x =20;
    public:
    void display(void){
        cout<<"x: "<<x<<endl;
    }
};
class der:public Base{
    int y =30;
    public:
    void display(void){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
};
int main(){
    der d1;
    d1.display();
    d1.Base::display();     //we can call the function of base class using the :: operator        
    return 0;
}