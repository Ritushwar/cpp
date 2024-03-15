//WAP in CPP to left justify and right justify a sample text within a width of 50
#include<iostream>
using namespace std;
int main(){
    cout.width(50);
    cout.setf(ios::left);
    cout<<"This text is left justified"<<endl;
    cout.unsetf(ios::left);
    cout.width(50);
    cout.setf(ios::right);
    cout<<"This text is right justified"<<endl;
    return 0;
}