//use of vector in c++
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    for(int i=1;i<10;i++){
        nums.push_back(i);
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}