//WAP to illustrate the static member function
#include<iostream>
using namespace std;
class sample{
    int value;
    static int count;         //static data member
    public:
    void set_value(int a){
        value = a;
        ++count;
    }
    void show_value(){
        cout<<"Value: "<<value<<endl;
    }
    static void show_count(){     //static member function
      cout<<"Value of count: "<<count<<endl;
    }
};
int sample::count;
int main(){
    sample s1, s2, s3;
    s1.set_value(100);
    s1.show_value();
    sample::show_count();
    s2.set_value(200);
    sample::show_count();
    s3.set_value(300);
    s1.show_value();
    s2.show_value();
    s3.show_value();
    sample::show_count();
    return 0;
}