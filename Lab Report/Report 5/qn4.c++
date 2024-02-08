//Virtual base class
#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void sget(){
        cout<<"Roll no: ";
        cin>>roll;
    }
    void sdisplay(){
        cout<<"Roll No: "<<roll<<endl;
    }
};
class test: virtual public student{
    protected:
    char name[20];
    public:
    void tget(){
        cout<<"Name: ";
        cin>>name;
    }
    void tdisplay(){
        cout<<"Name: "<<name<<endl;
    }
};
class sports: virtual public student{
    protected:
    float price;
    public:
    void ssget(){
        cout<<"Price: ";
        cin>>price;
    }
    void ssdisplay(){
        cout<<"Price: "<<price<<endl;
    }
};
class result: public test, public sports{
    float fee;
    public:
    void rget(){
         tget();  //name
         sget();  //roll
         ssget(); //price
        cout<<"Fee: ";
        cin>>fee;  //fee
    }
    void rdisplay(){
        tdisplay();  //name
        sdisplay();  //roll no
        ssdisplay(); //price
        cout<<"Fee: "<<fee<<endl;
    }
};
int main(){
    result r1;
    r1.rget();
    r1.rdisplay();
    return 0;
}