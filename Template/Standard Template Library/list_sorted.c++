//Standard template library
#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
    list <string>l;           // l is the container
    l.push_back("Ritushwar");
    l.push_back("Rajesh");
    l.push_back("Rajendra");
    l.push_back("Rabindra");
    l.push_back("Rohit");
    l.sort();                 //sorted the list in ascending order
    while(!l.empty()){
        cout<<l.front()<<endl;
        l.pop_front();
    }
    return 0;
}