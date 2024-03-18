/*WAP in c++ which contains a base class that ask the user to enter a complex number and make a 
derived class that adds the complex number of its own with the base. Finally make third class that is
friend of derived and calculate the difference of the base complex number and its own complex number*/
#include<iostream>
using namespace std;
class complex{
    protected:
    float real;
    float img;
    public:
    complex(){
        cout<<"For base class"<<endl;
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the complex part: ";
        cin>>img;
    }
    void show(){
        cout<<real<<" + i"<<img<<endl;
    }
    friend class derived;
};
class derived: public complex{
    protected:
    float real;
    float img;
    public:
    derived(){
        cout<<"For derived class"<<endl;
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the complex part: ";
        cin>>img;
    }
    void show(){
        cout<<real<<" + i"<<img<<endl;
    }
    void add(){
        cout<<"Addition...."<<endl;
        complex::show();
        cout<<" + ";
        show();
        cout<<" = "<<real + complex::real<<" + i"<<img + complex::img<<endl;
    }
    friend class third;
};
class third{
    protected:
    float real;
    float img;
    public:
    third(){
        cout<<"For third class"<<endl;
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the complex part: ";
        cin>>img;
    }
    void show(){
        cout<<real<<" + i"<<img<<endl;
    }
    void sub(complex &c, derived & d){
        cout<<"Subtraction...."<<endl;
        c.show();
        cout<<" - ";
        show();
        cout<<" = "<<c.real
    }
};