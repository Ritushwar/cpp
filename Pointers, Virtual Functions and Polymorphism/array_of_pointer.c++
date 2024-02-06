//Array of pointer to object
#include<iostream>
#include<string.h>
using namespace std;
class city{
    char *name;
    int len;
    public:
    city(){
        len =0;
        name = new char[len+1];
    }
    void set_name(void){
        char *s;
        s = new char[30];
        cout<<"Enter city name: ";
        cin>>s;
        len = strlen(s);
        name = new char[len +1];
        strcpy(name,s);
    }
    void display(void){
        cout<<name<<endl;
    }
};
int main(){
    city *ptr[10];      //array of pointer
    int n=0;
    int option;
    do{
        ptr[n] = new city;    //create new object
        ptr[n]->set_name();
        n++;
        cout<<"1 for more 0 for exit"<<endl;
        cin>>option;
    }while(option);
    //displaying the name
    for(int i=0;i<n;i++){
        ptr[i]->display();
    }
    return 0;
}