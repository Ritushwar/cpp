//Static Data Member and Static Member function
#include<iostream>
#include<iomanip>
using namespace std;
class test{
    int code;
    static int count;  //static data member
      public:
        void setcode(void){
            code = ++count;
        }
        void showcode(void){
            cout<<"Code is: "<<code<<endl;
        }
        static void showcount(void){  //defining static member function
            cout<<"Count is : "<<count<<endl;
        }
};
int test::count;
int main(){
    test t1, t2, t3;
    t1.setcode();
    t1.showcode();
    test::showcount();
    t2.setcode();
    t2.showcode();
    test::showcount();
    return 0;
}