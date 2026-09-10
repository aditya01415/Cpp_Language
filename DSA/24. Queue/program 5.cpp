#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    // vector<int> arr={0,-1,-2,3,4,-5,6,4,7,-8};
    vector<int> arr={3,-4,-7,30,7,-9,2,1,6,-1};
    int n=arr.size();
    int k=3;
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
         if(arr[i]<0) q.push(i);
    }

    int i=0;
    while(i<=n-k){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(auto el:ans){
        cout<<el<<" ";
    }
}