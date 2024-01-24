//MultiLevel Inheritance in c++
#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_no;
    public:
    void get_roll_no(int);
    void put_roll_no(void);
};
void Student::get_roll_no(int a){
    roll_no = a;
}
void Student::put_roll_no(){
    cout<<"Roll No: "<<roll_no<<endl;
}
class test: public Student{
    protected:
    float sub1, sub2;
    public:
    void get_marks(float, float);
    void show_marks();
};
void test::get_marks(float s1, float s2){
    sub1 = s1;
    sub2 = s2;
}
void test::show_marks(){
    cout<<"Sub1: "<<sub1<<endl;
    cout<<"Sub2: "<<sub2<<endl;
}
class result: public test{
    float total;
    public:
    void display();
};
void result::display(){
    total = sub1 + sub2;
    put_roll_no();
    show_marks();
    cout<<"Total: "<<total<<endl;
}
int main(){
    result student1;
    student1.get_roll_no(34);
    student1.get_marks(89.95, 93.45);
    student1.display();
    return 0;
}