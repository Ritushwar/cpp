// how to display data of array using pointers
#include<iostream>
using namespace std;
int main(){
    int num[]={1,2,3,4,5,6,7};
    int *ptr;
    ptr = num;
    for(int i=0;i<6;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}