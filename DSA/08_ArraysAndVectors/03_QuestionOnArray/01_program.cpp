/*
Ques : Find the last occurrence of x in the array.

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    int x=1;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            idx=i;
            break;
        }
    }
    // for(int i=0;i<v.size();i++){
    //     if(x==v[i]){
    //         idx=i;
    //     }
    // }

    cout<<"last occurrence of x in the array is : "<<idx;
}