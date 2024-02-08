//Pointer to derived object
/*We can also points to the object of the derived class using base pointer but this pointer can access to
  only data member and function which was derived from the base class not declare in the derived class
*/
#include<iostream>
using namespace std;
class BC{
    public:
    int b;
    void show(){
        cout<<"b: "<<b<<endl;
    }
};
class DC: public BC{
    public:
    int d=0;
    void show(){
        cout<<"b: "<<b<<endl;
        cout<<"d: "<<d<<endl;
    }
};
int main(){
    BC *bptr;   //base pointer
    BC base;
    bptr = &base;
    cout<<"Base pointer is pointing to base object"<<endl;
    bptr->b = 200;   //can access data member using base pointer
    bptr->show();    //can access member function
    DC derived;
    bptr = &derived;  //can also points to the derived object
    cout<<"Base pointer is pointed to derived object"<<endl;
    bptr->b = 300;
    // bptr->d = 400  inaccessible
    bptr->show();
    DC *dptr;   //derived pointer
    dptr = &derived;
    cout<<"Derived pointer is pointed to derived object"<<endl;
    dptr->b = 400;
    dptr->d = 500;
    dptr->show();
    return 0;
}