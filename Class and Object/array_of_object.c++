//Array of object
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class students{
    string name;
    int age;
    string department;
     public:
      void getdata();
      void display();
};
const int size = 3; //global variable
void students::getdata(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"Department: ";
        cin>>department;
}
void students::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Department: "<<department<<endl;
}
int main(){
    students s[size];  //array of object
    for(int i=0;i<size;i++){
         cout<<"Enter details of Student no: "<<i+1<<endl;
        s[i].getdata();
    }
    cout<<"\n"<<endl;
    for(int i=0;i<size;i++){
        s[i].display();
    }
    return 0;
}