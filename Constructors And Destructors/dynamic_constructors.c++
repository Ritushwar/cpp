//Dynamic Constructors
#include<iostream>
using namespace std;
class sample{
    int size;
    int *p;
    public:
      sample(int s);
      void read();
      void display();
};
sample::sample(int s){
    size = s;
    p = new int[size];    //dynamic initilization of object using construction
}
void sample::read(){
    for(int i=0;i<size;i++){
        cout<<"Enter value: "<<i+1<<" ";
        cin>>p[i];
    }
}
void sample::display(){
    cout<<"Value enter by user are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<p[i]<<endl;
    }
}
int main(){
    int value;
    cout<<"Enter the size of the array:";
    cin>>value;
    sample s1(value);
    s1.read();
    s1.display();
    return 0;
}