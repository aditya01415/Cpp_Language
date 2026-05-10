#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}