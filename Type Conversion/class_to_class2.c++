//WAP in CPP to convert cartesian system to polar system using the conversion code in destination class
#include<iostream>
#include<cmath>
using namespace std;
class cart{
    int x,y;
    public:
    void get_data();
    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }
};
class polar{
    float r, theta;
    public:
    void show_data();
    void operator = (cart);
};
void polar::operator=(cart c){
    int x = c.get_x();
    int y = c.get_y();
    r = sqrt(pow(x,2)+(y,2));
    theta = atan(y/x);
}
void cart::get_data(){
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
}
void polar::show_data(){
    cout<<"(r, theta) = ("<<r<<","<<theta<<")"<<endl;
}
int main(){
    cart c1;
    c1.get_data();
    polar p1;
    p1 = c1;
    p1.show_data();
    return 0;
}