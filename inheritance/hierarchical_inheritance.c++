//Hierarchical Inheritance in c++
#include<iostream>
using namespace std;
class student{
    protected:
    char name[20];
    int roll;
    public:
    void set_data(void);
};
class subject:public student{
    char sub_name[20];
    float marks;
    public:
    void set_marks(void);
    void display(void);
};
class extra:public student{
    char g_name[20];
    float points;
    public:
    void set_extra(void);
    void display();
};
void subject::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Subject Name: "<<sub_name<<endl;
    cout<<"Marks: "<<marks<<endl;
}
void subject::set_marks(){
    cout<<"Name of sub: ";
    cin>>sub_name;
    cout<<"Marks: ";
    cin>>marks;
}
void student::set_data(void){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll_no: ";
    cin>>roll;
}
void extra::set_extra(){
    set_data();
    cout<<"Game Name "<<endl;
    cin>>g_name;
    cout<<"Points: "<<endl;
    cin>>points;
}
void extra::display(){
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Game Name: "<<g_name<<endl;
    cout<<"Points: "<<points<<endl;
}
int main(){
    subject s1;
    s1.set_data();
    s1.set_marks();
    s1.display();
    extra e1;
    e1.set_extra();
    return 0;
}