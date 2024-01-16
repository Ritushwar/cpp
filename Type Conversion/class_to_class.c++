//Class to class conversion
#include <bits/stdc++.h>
using namespace std;
class source{
    string a = "Hello, World!";
    public:
    source(){}
    string getstring(){
        return a;
    }
};
class destination{
    string b;
    public:
    destination(){}
    void display();
    void operator = (source);
};
void destination::operator=(source S){
    b = S.getstring();
}
void destination::display(){
    cout<<b<<endl;
}
int main(){
    source s1;
    destination d1;
    d1 = s1;         //converting from one class to another class
    d1.display();
    return 0;
}