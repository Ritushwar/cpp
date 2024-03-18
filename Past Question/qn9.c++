//in file add, list, search, and delete the record
#include<iostream>
#include<fstream>
using namespace std;
class student{
    char name[20];
    int roll;
    public:
    student(){}
    void get_data(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll No:";
        cin>>roll;
    }
    void show_data(){
        cout<<roll<<'\t'<<name<<endl;
    }
    int get_roll(){
        return roll;
    }
};
int main(){
    int opt;
    loop:
    cout<<"Choose one"<<endl;
    cout<<"1)Add the records"<<endl;
    cout<<"2)List the records"<<endl;
    cout<<"3)Search by Roll"<<endl;
    cout<<"4)Delete the records"<<endl;
    fstream fptr;
     student s;
    cin>>opt;
    switch(opt){
        case 1:              //records the file
        int n;
        cout<<"Enter the no of student: ";
        cin>>n;
        fptr.open("details.txt",ios::out);
        if(fptr.fail()){
            cout<<"File opening fail"<<endl;
        }
        for(int i=0;i<n;i++){
            s.get_data();
            fptr.write((char*)&s,sizeof(s));
        }
        fptr.close();
        cout<<"Successfully added"<<endl;
        break;
        case 2:        //list the record
        fptr.open("details.txt",ios::in);
        if(fptr.fail()){
            cout<<"Reading fail"<<endl;
        }
        while(fptr.read((char*)&s,sizeof(s))){
            s.show_data();
        }
        fptr.close();
        break;
        case 3:       //search by roll no
        fptr.open("details.txt",ios::in);
         if(fptr.fail()){
            cout<<"Reading fail"<<endl;
        }
        int r;
        cout<<"Enter roll no to be searched: ";
        cin>>r;
        while(fptr.read((char*)&s,sizeof(s))){
            if(s.get_roll()==r){
                s.show_data();
            }
        }
        fptr.close();
        break;
        case 4:           //delete the record
        int d;
        cout<<"Enter the roll to be delete: ";
        cin>>d;
        student *sptr;
        sptr = new student[48];
        fptr.open("details.txt",ios::in);
        if(fptr.fail()){
            cout<<"Error1...."<<endl;
        }
        int i =0;
        while(fptr.read((char*)&s,sizeof(s))){
            sptr[i] = s;
            i++;
        }
        fptr.close();
        fptr.open("details.txt",ios::in);
        if(fptr.fail()){
            cout<<"Error2...."<<endl;
        }
        for(int j=0;j<=i;j++){
            if(sptr[j].get_roll()!=d){
                s = sptr[j];
                fptr.write((char*)&s,sizeof(s));
            }
        }
        fptr.close();
        cout<<"Success on delete"<<endl;
        break;
    }
    char choose;
    cout<<"Do you want to continue y for yes n for no: ";
    cin>>choose;
    if(choose=='y'){
    goto loop;
    }
    return 0;
}