//WAP to illustrtate the concept of setw()
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x1 = 100, x2 = 200, x3 = 300;
    cout<<setw(8)<<"Campus"<<setw(20)<<"Values"<<endl;
    cout<<setw(8)<<"Pulchowk"<<setw(20)<<x1<<endl;
    cout<<setw(8)<<"Thapathali"<<setw(20)<<x2<<endl;
    cout<<setw(8)<<"Pashchiamchal"<<setw(20)<<x3<<endl;
    return 0;
}