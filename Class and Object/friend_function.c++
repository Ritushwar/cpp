//Swaping private data of class using friend function
#include<iostream>
#include<iomanip>
using namespace std;
class first;
class second{
    int value2;
     public:
       void getdata(int a){
        value2 = a;
       }
       void display(){
        cout<<"Value2: "<<value2<<endl;
       }
       friend void swap(first &, second &);
};
class first{
    int value1;
    public:
     void getdata(int a){
        value1 = a;
     }
     void display(){
        cout<<"Value1: "<<value1<<endl;
     }
     friend void swap(first &, second &);
};
void swap(first &f, second &s){
    int temp = f.value1;
    f.value1 = s.value2;
    s.value2 = temp;
}
int main(){
    first f1;
    second s1;
    f1.getdata(100);
    s1.getdata(200);
    cout<<"Before swapping: "<<endl;
    f1.display();
    s1.display();
    swap(f1, s1);
    cout<<"After swapping: "<<endl;
    f1.display();
    s1.display();
}