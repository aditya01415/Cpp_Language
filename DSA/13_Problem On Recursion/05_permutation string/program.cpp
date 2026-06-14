/*
Ques: Print all increasing sequences of length k from 
first n natural numbers.
*/

#include<iostream>
#include<vector>
using namespace std;
void increaseSubset(vector<int> ans,int original[],int n,int idx,int k){
    if(idx==n){
        if(ans.size()==k){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }
        return;
        
    }
        if(ans.size()+(n-idx)<k) return;
        increaseSubset(ans,original,n,idx+1,k);
        ans.push_back(original[idx]);
        increaseSubset(ans,original,n,idx+1,k);
}
int main(){
    int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1;
    int k=3;
    increaseSubset(v1,arr,n,0,k);
   
}