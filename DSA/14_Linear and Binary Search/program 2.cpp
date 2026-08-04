/*
*Lower bound 
Ques: Given a sorted integer array and an integer 
‘x’, find the lower bound of x.
*/
#include<iostream>
#include<vector>
using namespace std;
int lowerBound1(int nums[],int target){
    int idx=0;
    while(nums[idx]<target){
        idx++;
    }
    return nums[idx-1];
}
int lowerBound2(int nums[],int target,int n){
    for(int i=0;i<n;i++){
        if(nums[i]>target){
            return nums[i-1];
        }
    }
}
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=20;

    cout<<lowerBound1(nums,target)<<endl;
    cout<<lowerBound2(nums,target,n);
}