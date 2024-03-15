//WAP to read the details of the student from file and display it
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    char name[20], addr[20];
    int roll;
    long int tel;
    ifstream fptr;
    fptr.open("details.txt",ios::in);
    if(fptr.fail()){
        cout<<"Error while opening the file"<<endl;
        exit(1);
    }
    cout<<"Reading from file"<<endl;
    fptr>>name>>roll>>addr>>tel;
    while(fptr){
        cout<<name<<'\t'<<roll<<'\t'<<addr<<'\t'<<tel<<endl;
        fptr>>name>>roll>>addr>>tel;
    }
    fptr.close();
    return 0;
}