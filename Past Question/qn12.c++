//catching all exception
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    char name[] = "Ritushwar";
    int x = a-b;
    try{
    if(x!=0){
        cout<<a/x<<endl;
        for(int i=0;i<20;i++){
            if(name[i]=='\0'){
                throw name[i];            
                }
                else{
            cout<<name[i]<<endl;
        }
        }
    }
    else{
        throw x;
    }
    }
    catch(...){
        cout<<"Exception occur"<<endl;
    }
}