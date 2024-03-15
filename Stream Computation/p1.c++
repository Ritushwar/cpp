//Handling error while inputting number
#include<iostream>
using namespace std;
int main(){
    int i;
    while(true){
        cout<<"Enter any integer: ";
        cin>>i;
        if(cin.good()){
            cin.ignore(10,'\n');
            break;
        }
        cin.clear();
        cout<<"Incorrect Input"<<endl;
        cin.ignore(10,'\n');
    }
    cout<<"Integer is: "<<i<<endl;
    return 0;
}