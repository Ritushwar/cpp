//WAP in CPP to convert integer into hexadecimal and octal form
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any integer: ";
    cin>>n;
    cout.setf(ios::hex,ios::basefield);   
    cout<<"Hexadecimal form is: "<<n<<endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct,ios::basefield);
    cout<<"Octal form is: "<<n<<endl;
    cout.unsetf(ios::oct);
    return 0;
}