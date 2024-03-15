//WAP in cpp to write the character entered by the user until he press the enter key
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ofstream out;
    out.open("student.txt",ios::out);      //opening the file
    cout<<"Start writing to the file"<<endl;
    while((ch=cin.get())!='\n'){
        out.put(ch);
    }
    out.close();          //closing the file
    cout<<"File written"<<endl;
    return 0;
}