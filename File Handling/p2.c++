//WAP to read from the file and display it on the screen
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
    char ch;
    ifstream in;
    in.open("student.txt",ios::in);   //opening the file in the read mode
    if(in.fail()){
        cout<<"Error while opening file"<<endl;
        exit(1);
    }
    cout<<"Reading from the file"<<endl;
    while(in.get(ch)){
        cout<<ch;
    }
    in.close();
    return 0;
}