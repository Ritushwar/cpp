//Parameterized Constructors
#include<iostream>
using namespace std;
class sample{
    int x,y;
    public:
     sample(int, int); //parameterized Constructors
     void display();
};
sample::sample(int a, int b){
    x=a;
    y=b;
}
void sample::display(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}
int main(){
    sample s1(100,200); //implict call invokes constructors
    sample s2 = sample(300,400);  //explict call
    cout<<"Of object s1"<<endl;
    s1.display();
    cout<<"Of object s2"<<endl;
    s2.display();
}