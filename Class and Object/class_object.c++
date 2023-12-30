//Class declaration and object defining
#include<iostream>
#include<iomanip>
using namespace std;
class item{  //declaration of class
   int number;   //By default private
   float cost;   //By default private
   public:
    void getdata(); //declaring a public member function
    void putdata();
};
int main(){
   item i1;           //creating object i1 of a class item
   i1.getdata();    //accessing member function using . operator
   i1.putdata();
   return 0;
}
void item::getdata(){   //defining member function outside the class
    int n;
    float c;
    cout<<"Enter Number and cost"<<endl;
    cin>>n>>c;
    number = n;
    cost = c;
}
void item::putdata(){   //defining member function outside the class
    int n; 
    float c;
    cout<<"Number: "<<number<<endl;
    cout<<"Cost: "<<cost<<endl;
}