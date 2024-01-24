//WAP to illustrate the Use of static data member in c++
#include<iostream>
using namespace std;
class sample{
    int value;
    static int count;   //static data member
    public:
    void set_code(int a){
        value = a;
        ++count;
    }
    void show_code(){
        cout<<"Value: "<<value<<endl;
    }
    void get_count(void){
        cout<<"Value of count is: "<<count<<endl;
    }
};
int sample::count;
int main(){
    sample s1,s2,s3;
    s1.set_code(100);
    s1.show_code();
    s1.get_count();
    s2.get_count();
    s3.get_count();
    s2.set_code(300);
    s3.set_code(500);
    s1.show_code();
    s2.show_code();
    s3.show_code();
    s1.get_count();
    s2.get_count();
    s3.get_count();
    return 0;
}