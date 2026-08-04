/*
*Lower bound 
Ques: Given a sorted integer array and an integer 
‘x’, find the lower bound of x.
*/
#include<iostream>
#include<vector>
using namespace std;
int lowerBound1(int nums[],int target,int n){
    

    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) return nums[mid+1];
        else if(nums[mid]<target && nums[mid+1]>target) return nums[mid+1];
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }
}
int lowerBound2(int nums[],int target,int n){
    

    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target){
              return nums[mid+1];
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }
    return nums[lo];
}
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=20;

    cout<<lowerBound1(nums,target,n)<<endl;
    cout<<lowerBound2(nums,target,n);
}