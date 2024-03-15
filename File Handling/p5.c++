//WAP in CPP to write object to file and read it from file and display it
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
using namespace std;
class sample{
    char name[20];
    char addr[30];
    int roll;
    long int tel;
    public:
    void get_data();
    void show_data();
};
void sample::get_data(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the address: ";
    cin>>addr;
    cout<<"Enter Roll NO: ";
    cin>>roll;
    cout<<"Enter phone Number: ";
    cin>>tel;
}
void sample::show_data(){
    cout<<name<<'\t'<<addr<<'\t'<<roll<<'\t'<<tel<<endl;
}
int main(){
    sample s;
    int n;
    cout<<"Enter the no of student: ";
    cin>>n;
    fstream fptr;
    fptr.open("details2.txt",ios::out);
    if(fptr.fail()){
        cout<<"Error while opening"<<endl;
        exit(1);
    }
    cout<<"Writing to the file"<<endl;
    for(int i=0;i<n;i++){
        s.get_data();
        fptr.write((char*)&s,sizeof(s));
    }
    cout<<"Written done"<<endl;
    fptr.close();
    cout<<"Reading from the file"<<endl;
    fptr.open("details2.txt",ios::in);
    if(fptr.fail()){
        cout<<"Error while reading";
        exit(1);
    }
    while(fptr.read((char*)&s,sizeof(s))){
        s.show_data();
    }
    fptr.close();
    return 0;
}
