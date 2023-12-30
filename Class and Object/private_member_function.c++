//private member function
#include<iostream>
#include<string>
using namespace std;
class user{
    string name;
    int roll_no;
    void read(void);  //private member function
    public:
     void display(void);  //public member function
     void update(void);
};
int main(){
    user u1;
    u1.update();
    u1.display();
    return 0;
}
void user::update(){
    cout<<"Update function is called"<<endl;
    read();  //private memeber function can be called by member function only
}
void user::read(){
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your Roll_no"<<endl;
    cin>>roll_no;
}
void user::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll_no<<endl;
}