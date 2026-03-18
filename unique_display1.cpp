#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,2,1};
    int str=0;
    for(int val:arr){
        str=str^val;
    }
    cout<<str;
    return 0;
}
