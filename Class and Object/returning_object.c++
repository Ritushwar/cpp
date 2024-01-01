//Returning object
#include<iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
    void read();
    void display();
    matrix trans();
};
void matrix::read(){
    cout<<"Enter the elements of Matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"m["<<i<<"]["<<j<<"]";
            cin>>m[i][j];
            cout<<"\n";
        }
    }
}
void matrix::display(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}
matrix matrix::trans(){
    matrix m2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m2.m[i][j]=m[j][i];
        }
    }
    return m2;
}
int main(){
    matrix mtr1, mtr2;
    mtr1.read();
    mtr1.display();
    mtr2 = mtr1.trans();
    cout<<"Transpose Matrix is:"<<endl;
    mtr2.display();
    return 0;
}