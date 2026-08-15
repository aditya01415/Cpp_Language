/*
Ques : Given an array with N distinct elements, 
convert the given array to a form where all 
elements are in the range from 0 to N-1. The order 
of elements is the same, i.e., 0 is placed in the 
place of the smallest element, 1 is placed for the 
second smallest element, … N-1 is placed for the 
largest element.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> nums={19,12,23,8,16};
    
    for(int el:nums){
        cout<<el<<" ";
    }
    int x=0;
    for(int i=0;i<nums.size();i++){
        int min=INT_MAX;
        int idx=-1;
       
        for(int j=0;j<nums.size();j++){
            if(nums[j] <=0) continue;
            if(nums[j]<min){
                min=nums[j];
                idx=j;
            }
        }

        nums[idx]=x;
        x--;
        

    }
    for(int i=0;i<nums.size();i++){
        nums[i]*=-1;
    }
    cout<<endl;
    for(int el:nums){
        cout<<el<<" ";
    }
}