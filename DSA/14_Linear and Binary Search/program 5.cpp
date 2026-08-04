/*
Ques :Given a sorted array of n elements and a 
target ‘x’. Find the first occurrence of ‘x’ in the 
array. If ‘x’ does not exist return -1.
*/

#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,2,2,3,3,3,3,3,4,4,5,8,9};
    // int nums[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=4;

    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) {
            if(nums[mid-1]==target){
                hi=mid-1;
            } else {
            cout<<mid;
            flag=true;
            break;
            }
           
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;

    }
    if(!flag) cout<<-1;
}