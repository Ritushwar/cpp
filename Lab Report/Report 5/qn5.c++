//execution order of constructors and destructors in c++
#include<iostream>
using namespace std;
class grandparent{
    public:
    grandparent(){
        cout<<"Constructor of GrandParent"<<endl;
    }
    ~grandparent(){
        cout<<"Destructor of GrandParent"<<endl;
    }
};
class parent1: virtual public grandparent{
    public:
    parent1(){
        cout<<"Constructor of Parent1"<<endl;
    }
    ~parent1(){
        cout<<"Destructor of Parent1"<<endl;
    }
};
class parent2: virtual public grandparent{
    public:
    parent2(){
        cout<<"Constructor of parent2"<<endl;
    }
    ~parent2(){
        cout<<"Destructor of Parent2"<<endl;
    }
};
class child: public parent1, public parent2{
    public:
    child(){
        cout<<"Constructor of child class"<<endl;
    }
    ~child(){
        cout<<"Destructor of child class"<<endl;
    }
};
int main(){
    child c1;
    return 0;
}