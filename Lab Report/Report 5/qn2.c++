//inheritance
#include<iostream>
using namespace std;
class crickter{
    protected:
    char name[20];
    int age;
    int no_of_match;
};
class bowler: public crickter{
    int no_of_wicket;
    public:
    void read(){
        cout<<"Enter the details of Bowler"<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"No of Matches played: ";
        cin>>no_of_match;
        cout<<"Enter the no of Wicket: ";
        cin>>no_of_wicket;
    }
    void display(){
        cout<<"Details of Bowler"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"No of matches played: "<<no_of_match<<endl;
        cout<<"No of Wicket: "<<no_of_wicket<<endl;
    }
};
class batsman: public crickter{
    int no_of_runs;
    int centuries;
    public:
    void read(){
        cout<<"Enter the details of Batsman"<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"No of Matches played: ";
        cin>>no_of_match;
        cout<<"No of runs: ";
        cin>>no_of_runs;
        cout<<"Centerius: ";
        cin>>centuries;
    }
    void display(){
        cout<<"Details of Batsman"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"No of matches played: "<<no_of_match<<endl;
        cout<<"No of runs: "<<no_of_runs<<endl;
        cout<<"Centerius: "<<centuries<<endl;
    }
};
int main(){
    bowler b1;
    b1.read();
    batsman b2;
    b2.read();
    b1.display();
    b2.display();
    return 0;
}