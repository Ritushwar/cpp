//wap to illustrate the inheritance
#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void sget(){
        cout<<"roll no: ";
        cin>>roll;
    }
    void sdisplay(){
        cout<<"Roll no: "<<roll<<endl;
    }
};
class test:public student{
    protected:
    char name[20];
    public:
    void tget(){
        cout<<"Enter Name: ";
        cin>>name;
        sget();
    }
    void tdisplay(){
        cout<<"Name: "<<name<<endl;
        sdisplay();
    }
};
class sports:public student{
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
    protected:
    float fee;
    public:
    void rget(){
        tget();
        ssget();
        cout<<"Fee: ";
        cin>>fee;
    }
    void rdisplay(){
        tdisplay();
        ssdisplay();
        cout<<"Fee: "<<fee<<endl;
    }
};
int main(){
    result r1,r2;
    r1.rget();
    r2.rget();
    r1.rdisplay();
    r2.rdisplay();
    return 0;
}
