//using the concept of unformatted string I/O
#include<iostream>
using namespace std;
int main(){
    char str[30];
    cout<<"Enter your name:";
    cin.getline(str,10);   //taking only 10 character
    cout.write(str,4);  //displaying only 4 character
    return 0;
}