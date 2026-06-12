//subsets for array

#include<iostream>
#include<vector>
using namespace std;
void subsetArray(vector<int> ans,int original[],int n,int idx,bool flag){
    int num=original[idx];
     if(idx==n){
         for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
         }
         cout<<endl;
         return;
     }
     if(idx==n-1){
          subsetArray(ans,original,n,idx+1,true);
          if(flag){
            ans.push_back(num);
           subsetArray(ans,original,n,idx+1,true);
          }
          return;
        
     }
     int num1=original[idx+1];
     if(num==num1){
        subsetArray(ans,original,n,idx+1,false);
          if(flag){
            ans.push_back(num);
           subsetArray(ans,original,n,idx+1,true);
          }
     } else{
        subsetArray(ans,original,n,idx+1,true);
          if(flag){
            ans.push_back(num);
           subsetArray(ans,original,n,idx+1,true);
          }
     }
    
     
}
int main(){
   int arr[]={1,2,2};
   int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1;
    subsetArray(v1,arr,n,0,true);
   
}