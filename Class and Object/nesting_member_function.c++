//Nesting a member function
#include<iostream>
#include<string>
using namespace std;
class binary{
    string s; //private
    public:
     void read(void){
        cout<<"Enter binary Number:";
        cin>>s;
     }

     void display(void);
     void check(void);
     void convert(void);
};
int main(){
    binary b1;
    b1.read();
    b1.display();
    return 0;
}
void binary::display(){
    convert();  //calling convert() member function
    cout<<"1's Compliment is: "<<s<<endl;
}
void binary::check(){
   for(int i=0;i<s.length(); i++){
    if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<<"Incorrect Binary format"<<endl;
        exit(0);
    }
   }
}
void binary::convert(){
    check();   //calling check() member function
    cout<<"Hello"<<endl;
    for(int i=0; i<s.length();i++){
        if(s.at(i)=='0')
          s.at(i)='1';
           else
            s.at(i)='0';            
    }
}