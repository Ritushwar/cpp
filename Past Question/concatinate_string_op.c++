//WAP to concatenate two user given string using the concept of operator overloading;
#include<iostream>
#include<cstring>
using namespace std;
class sample{
    char str[30];
    public:
    sample(){}
    void get_str(){
        cout<<"Enter string:";
        cin>>str;
    }
    void show(){
        cout<<str<<endl;
    }
    sample operator + (sample s){
        sample temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
};
int main(){
    sample s1, s2,s3;
    s1.get_str();
    s2.get_str();
    s3 = s1 + s2;
    s3.show();
    return 0;
}