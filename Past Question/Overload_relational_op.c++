/*WAP in CPP to overload the relational operators(> and ==) to compare two distance objects using non
 member function */
 #include<iostream>
 using namespace std;
 class Distance{
    int m;
    int cm;
    public:
    Distance(){}
    void get_data(){
        cout<<"Enter the lenght: "<<endl;
        cout<<"m: ";
        cin>>m;
        cout<<"cm: ";
        cin>>cm;
    }
    friend bool operator >(Distance, Distance);
    friend bool operator ==(Distance, Distance);
 };
 bool operator >(Distance dd1, Distance dd2){
    int dis1, dis2;
    dis1 = dd1.cm + dd1.m*100;
    dis2 = dd2.cm + dd2.m*100;
    if(dis1>dis2){
        return true;
    }
    else{
        return false;
    }
 }
 bool operator ==(Distance dd1, Distance dd2){
    int dis1, dis2;
    dis1 = dd1.cm + dd1.m*100;
    dis2 = dd2.cm + dd2.m*100;
    if(dis1==dis2){
        return true;
    }
    else{
        return false;
    }
 }
 int main(){
    Distance d1, d2;
    d1.get_data();
    d2.get_data();
    if(d1>d2){
        cout<<"D1 is Greater than D2"<<endl;
    }
    else if(d1==d2){
        cout<<"D1 is equal to D2"<<endl;
    }
    else{
        cout<<"Both are either equal or greater"<<endl;
    }
    return 0;
 }