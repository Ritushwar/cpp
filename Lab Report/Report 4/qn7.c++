/* WAP to convert class to class conversion  distance1 to distance2
*/
#include<iostream>
using namespace std;
class Distance1{
    int feet;
    int inch;
    public:
    void read(){
        cout<<"feet: ";
        cin>>feet;
        cout<<"inch: ";
        cin>>inch;
    }
    int get_feet(){
        return feet;
    }
    int get_inch(){
        return inch;
    }
};
class Distance2{
    int m;
    int cm;
    public:
    void display(){
        cout<<m<<" meter "<<cm<<" cm"<<endl;
    }
    void operator=(Distance1);
};
void Distance2::operator=(Distance1 d1){
    int temp1, temp3, temp4;
    float temp2;
    temp1 = d1.get_inch() + d1.get_feet()*12;
    temp2 = temp1/39.37;   //float
    temp3 = temp1/39.37;   //integer
    temp4 = (temp2 - temp3)*100;
    m = temp3;
    cm = temp4;
}
int main(){
    Distance1 d1;
    Distance2 d2;
    d1.read();
    d2 = d1;
    d2.display();
    return 0;
}