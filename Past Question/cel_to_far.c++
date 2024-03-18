//Convert celsius to fahrenheit(conversion code in the source class)
#include<iostream>
using namespace std;
class far{
    float f;
    public:
    far(){}
    far(float f){
        this->f = f;
    }
    void show(){
        cout<<"Farenheit: "<<f<<endl;
            }
};
class cel{
    float c;
    public:
    cel(){}
    void get_data(){
        cout<<"Enter temperature in celsius: "<<endl;
        cin>>c;
    }
    operator far(){
        float temp;
        temp = c*1.8 + 32;
        return far(temp);
    }
};
int main(){
    cel c1;
    far f1;
    c1.get_data();
    f1 = c1;
    f1.show();
    return 0;
}