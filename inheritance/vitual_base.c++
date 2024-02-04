//virtual base class in c++
#include<iostream>
using namespace std;
class student{
    protected:
     int roll_no;
    public:
    void get_no(int r){
        roll_no = r;
    }
    void put_no(void){
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
class test: virtual public student{
    protected:
     float part1, part2;
     public:
     void get_marks(float p1, float p2){
        part1 = p1;
        part2 = p2;
     }
     void put_marks(void){
        cout<<"Marks obtained:"<<endl;
        cout<<"Part1 = "<<part1<<endl;
        cout<<"Part2 = "<<part2<<endl;
     }
};
class sports: virtual public student{
    protected:
    float score;
    public:
    void get_scores(float s){
        score = s;
    }
    void put_scores(void){
        cout<<"Scores: "<<score<<endl;
    }
};
class result: public test, public sports{
    protected:
    float total;
    public:
    void display(void);
};
void result::display(void){
    total = part1 + part2 + score;
    put_no();
    put_marks();
    put_scores();
    cout<<"Total Marks: "<<total<<endl;
}
int main(){
    result s1;
    s1.get_no(34);
    s1.get_marks(56.7, 89.9);
    s1.get_scores(67);
    s1.display();
    return 0;
}