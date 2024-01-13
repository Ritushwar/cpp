//Manipulation of string using operator overloading
#include<iostream>
#include<string.h>
using namespace std;
class adds{
    public:
    char s1[25], s2[25];
    adds(){}                 //default constructor
    adds(char st1[], char st2[]){
        strcpy(s1,st1);
        strcpy(s2,st2);
    }
    void operator +(){
        cout<<"The concatinated string is "<<strcat(s1,s2)<<endl;
    }
};
int main(){
    char str1[]="Hello";
    char str2[]="World";
    adds a(str1,str2);
    +a;
    return 0;
}