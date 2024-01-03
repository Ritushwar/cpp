//Dynamic initilization of object
#include<iostream>
using namespace std;
class fixed_deposite{
    long int p_amount;              //principle amount
    int years;
    float Rate;
    float R_value;
    public:
     fixed_deposite(long int, int, int r=8);
     fixed_deposite(long int, int, int);
     fixed_deposite(long int, int, float);
     void display(void);
};
void fixed_deposite::display(){
        cout<<"Details"<<endl;
        cout<<"Principle Amount: "<<p_amount<<endl;
        cout<<"Time: "<<years<<endl;
        cout<<"Rate :"<<Rate<<endl;
        cout<<"Return amount: "<<R_value<<endl;
     
}
fixed_deposite::fixed_deposite(long int p, int y, int R =8){
    p_amount = p;
    years = y;
    Rate = R;
    R_value = p_amount;
    for(int i=1;i<years;i++){
        R_value = R_value*(1+float(Rate)/100);
    }
}
fixed_deposite::fixed_deposite(long int p, int y, float r){
    p_amount = p;
    years = y;
    Rate = r;
    R_value = p_amount;
    for(int i = 1;i<years;i++){
        R_value = R_value*(1 +r);
    }
}
int main(){
    long int p;
    int y;
    int R;
    int r;
    cout<<"Enter the Principle Amount and time in years:";
    cin>>p>>y;
    fixed_deposite fd1 = fixed_deposite(p,y);
    fd1.display();
    cout<<"Enter the principle Amount , time in year and interest rate in(percent):"<<endl;
    cin>>p>>y>>R;
    fixed_deposite fd2 = fixed_deposite(p,y,R); 
    fd2.display();
    cout<<"Enter the principle Amount, time in years and interest rate in float: "<<endl;
    cin>>p>>y>>r;
    fixed_deposite fd3 = fixed_deposite(p, y, r);
    fd3.display();
    return 0;
}