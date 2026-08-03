
#include<iostream>
#include<vector>
using namespace std;
void printTargetSum(vector<int> ans,vector<int> arr,int target,int idx){
    if(target<0) return;
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
       for(int i=idx;i<arr.size();i++){
         ans.push_back(arr[i]);
         printTargetSum(ans,arr,target-arr[i],i);
         ans.pop_back();
       }
}
int main(){
    vector<int> arr={2,3,5};
    int target=8;
    vector<int> v;
    printTargetSum(v,arr,target,0);
}