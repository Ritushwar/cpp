//WAP ta take the details of n student write it the file and modify it according to roll no
#include<iostream>
#include<fstream>
using namespace std;
class student{
    char name[20];
    int roll;
    public:
    void get_data();
    void show_data();
    int get_roll(){
    return roll;
    }
};
void student::get_data(){
    cout<<"Name: ";cin>>name;
    cout<<"Roll: ";cin>>roll;
}
void student::show_data(){
    cout<<roll<<'\t'<<name<<endl;
}
int main(){
    student s;
    student *ptr;
    int n;
    cout<<"Enter the no of student: "<<endl;
    cin>>n;
    ptr = new student[n];     //allocating n no of object array
    fstream fptr;
    fptr.open("Student.txt",ios::out);  //open file in write mode both
    if(fptr.fail()){
        cout<<"File opening fail"<<endl;
    }
    for(int i=0;i<n;i++){
        s.get_data();
        fptr.write((char*)&s,sizeof(s));
    }
    fptr.close();

    cout<<"Reading from the file"<<endl;
    fptr.open("Student.txt",ios::in);  //reading mode
    if(fptr.fail()){
        cout<<"Error while reading";
        exit(1);
    } 
    int i=0;
    while(fptr.read((char*)&s,sizeof(s))){
        ptr[i] = s;            //reading one by one object from the file and store in array of object
        i++;
    }
    fptr.close();
    //arranging them according to the roll no
    for(int j=0;j<i;j++){
        for(int k=j+1;k<=i;k++){
            if(ptr[j].get_roll()>ptr[k].get_roll()){
                s = ptr[j];
                ptr[j] = ptr[k];
                ptr[k] = s ;
            }
        }
    }
    //writing them in the file
    fptr.open("Student.txt",ios::out);    //writing mode
    if(fptr.fail()){
        cout<<"File opening fail"<<endl;
    }
   // fptr.seekg(0,ios::beg);
    for(int j =0;j<i;j++){
        s = ptr[j];
        fptr.write((char*)&s,sizeof(s));
    }
    fptr.close();
    //reading from the file
    fptr.open("student.txt",ios::in);  //reading mode
    if(fptr.fail()){
        cout<<"Error while reading";
        exit(1);
    }
    //fptr.seekg(0,ios::beg);
    while(fptr.read((char*)&s,sizeof(s))){
        s.show_data();
    }
    fptr.close();
    return 0;
}