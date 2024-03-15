//WAP in cpp to write the details of n student entered by user using the concept of formatted output to a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[20], addr[20];
    int roll;
    long int tel;
    ofstream out;
    out.open("details.txt",ios::out);
    int n;
    cout<<"Enter the number of the student: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the name: ";cin>>name;
        cout<<"Enter the Roll NO: ";cin>>roll;
        cout<<"Enter the Address: ";cin>>addr;
        cout<<"Enter the Telephone: ";cin>>tel;
        out<<name<<'\t'<<roll<<'\t'<<addr<<'\t'<<tel<<endl;
    }
    cout<<"Written done"<<endl;
    out.close();
    return 0;
}