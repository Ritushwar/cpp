//WAP in CPP to convert cartesian product to polar coordinate using the conversion code in source
#include<iostream>
#include<cmath>
using namespace std;
class polar{
    float r, theta;
    public:
    polar(){
        r = 0;
        theta = 0;
    }
    polar(float r, float theta){
        this->r = r;
        this->theta = theta;
    }
    void show(){
        cout<<"(r,theta) = ("<<r<<" , "<<theta<<")"<<endl;
    }
};
class cart{
    int x, y;
    public:
    void get();
    operator polar();
};
void cart::get(){
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
}
cart::operator polar(){
    float r, theta;
    r = sqrt(pow(x,2)+pow(y,2));
    theta = atan(y/x);
    return polar(r,theta);
}
int main(){
    cart c1;
    c1.get();
    polar p1;
    p1 = c1;
    p1.show();
    return 0;
}