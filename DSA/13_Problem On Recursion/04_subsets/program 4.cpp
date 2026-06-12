//subsets for array

#include<iostream>
#include<vector>
using namespace std;
void subsetArray(vector<int> ans,int original[],int n,int idx){
    int num=original[idx];
     if(idx==n){
         for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
         }
         cout<<endl;
         return;
     }
     subsetArray(ans,original,n,idx+1);
     ans.push_back(num);
     subsetArray(ans,original,n,idx+1);
     
}
int main(){
   int arr[]={1,2,3};
   int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1;
    subsetArray(v1,arr,n,0);
   
}