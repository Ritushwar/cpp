//WAP to use this pointer to return object of class from member function
#include<iostream>
#include<string.h>
using namespace std;
class student{
    char name[10];
    int roll_no;
    float marks;
    public:
    student& set_data(const char name[10], int r, float marks){
        strcpy(this->name, name);
        this-> roll_no = r;
        this->marks = marks;
        return *this;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.set_data("ritu",34,56.78).display();
    return 0;
}