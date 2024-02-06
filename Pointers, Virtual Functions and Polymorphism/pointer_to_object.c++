//pointer to object in c++
#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
    void set_item(int c, float p){
        code = c;
        price = p;
    }
    void show_item(void){
        cout<<"Code: "<<code<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    item *ptr = new item[3];
    item *d = ptr;
    int x;
    float y;
    for(int i=0;i<3;i++){
        cout<<"Enter item code: ";
        cin>>x;
        cout<<"Enter price: ";
        cin>>y;
        ptr->set_item(x,y);
        ptr++;
    }
    for(int i=0;i<3;i++){
        cout<<"Items details: "<<endl;
        d->show_item();
        d++;
    }
    return 0;
}