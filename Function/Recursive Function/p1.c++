//Tower of Hanoi
#include<iostream>
#include<iomanip>
using namespace std;
void tower_of_hanoi(int start, int end, char source, char aux, char destination){
    if(start>end){
        return;
    }
    tower_of_hanoi(start, end-1, source, destination, aux);
    cout<<"Move disk "<<end<<" from "<<source<<"to "<<destination<<endl;
    tower_of_hanoi(start, end-1,aux, source, destination);
}
int main(){
    tower_of_hanoi(1,3,'A','B','C');
    return 0;
}