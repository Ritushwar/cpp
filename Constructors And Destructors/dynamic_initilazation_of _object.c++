#include<iostream>
using namespace std;
class fixed_deposite{
    int p_amount;
    int years;
    float Rate;
    float R_value;
    public:
      fixed_deposite(){}
      fixed_deposite(int p, int y, float r=1.4);
      fixed_deposite(int p, int y, int R);
      void display(void);
};
void fixed_deposite::display(){
    cout<<"Principle Amount:"<<p_amount<<endl;
    cout<<"Return Value: "<<R_value<<endl;
}
fixed_deposite::fixed_deposite(int p, int y, float r){
    p_amount = p;
    years = y;
    Rate = r;
    R_value = p_amount;
    for(int i=0;i<=y;i++){
        R_value = R_value*(1.0+Rate);
    }
}
fixed_deposite::fixed_deposite(int p, int y, int R){
    p_amount = p;
    years = y;
    Rate = R;
    R_value = p_amount;
    for(int i=0; i<=y;i++){
        R_value = R_value*(1+Rate/100);
    }
}
int main(){
    fixed_deposite fd1, fd2, fd3;
    int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount, period, interest rate(in percent)"<<endl;
    cin>>p>>y>>R;
    fd1 = fixed_deposite(p,y,R);
    cout<<"Enter amount, period, interest rate(decimal form)"<<endl;
    cin>>p>>y>>r;
    fd2 = fixed_deposite(p,y,r);
    cout<<"Enter amount and period"<<endl;
    cin>>p>>y;
    fd3 = fixed_deposite(p,y);
}