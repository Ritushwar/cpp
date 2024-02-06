#include<iostream>
#include<string>
using namespace std;

int main(){
    string std;
    char str[30]="Hello my name is";
    int i = 0;
    do{
        if(str[i]==' '){
            cout<<std<<endl;
            std = "";
        }
        else{
            std += str[i];
        }
        i++;
    }while(str[i] != '\0');
    cout<<std<<endl;         //for last word after the loop
    return 0;
}