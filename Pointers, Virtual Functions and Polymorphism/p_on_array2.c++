//Search number in the array using pointer
#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,23,34,45,56,67,78,89,90};
    int *ptr;
    ptr = arr;  // ptr = &arr[0]
    int num;
    cout<<"Enter the number to be searched"<<endl;
    cin>>num;
    for(int i=0;i<9;i++){
        if(*ptr==num){
            cout<<"Number is found"<<endl;
            break;
        }
        else if(i==8){
            cout<<"Number doesnot found"<<endl;
        }
        ptr++;
    }
    return 0;
}