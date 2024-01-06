//Implementation of the destructures
#include<iostream>
using namespace std;
int count = 0;
class sample{
     public:
     sample(){
        count++;
        cout<<"Constructor is called object no:"<<count<<endl;
     }
     ~sample(){
        cout<<"Destructor is called object no:"<<count<<" is destroyed"<<endl;
        count--;
     }
};
int main(){
    cout<<"Outside the block"<<endl;
    cout<<"Creatiing one object outside the block"<<endl;
    sample s1;
    {
        cout<<"Inside block"<<endl;
        cout<<"Creating two more object inside the block 2"<<endl;
        sample s2, s3;
        cout<<"Leaving block"<<endl;
    }
    cout<<"Outside the block"<<endl;
    return 0;
}