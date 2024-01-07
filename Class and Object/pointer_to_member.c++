//Pointer to member(Member means it can be data member or function also)
#include<iostream>
using namespace std;
class sample{
    public:
    int x;
    void disp(int y){
        cout<<"Value Passed is:"<<y<<endl;
    }
};
int main(){
    sample s1;
    int sample::*ptra = & sample :: x ;             //ptra is the pointer pointed to the data member x
    s1.*ptra = 10;                                  //assigning value to the s1.x
    cout<<"Value of x is: "<<s1.*ptra<<endl;
    void(sample::*ptrb)(int) = &sample::disp;        //ptrb is a pointer pointed to the member function disp
    s1.disp(100);
    (s1.*ptrb)(200);                                //function calling using pointer
    return 0;
}