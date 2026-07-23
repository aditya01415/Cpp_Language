
/*
Finding subArrays
Find out all the subarrays of an array.
- No subsequence jo ki continuous fashion me ho
using of recursion
*/

#include<iostream>
#include<vector>
using namespace std;
void printSubArray(vector<int> ans,int original[],int n,int idx){
     if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
     }
     printSubArray(ans,original,n,idx+1);
     if(ans.size()==0 || ans[ans.size()-1]==original[idx-1]){
        ans.push_back(original[idx]);
        printSubArray(ans,original,n,idx+1);
     }
     
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    printSubArray(ans,arr,n,0);
   

}