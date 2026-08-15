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
using namespace std;
int main(){
    vector<int> nums={19,12,23,8,16};
    
    for(int el:nums){
        cout<<el<<" ";
    }
    vector<int> copyNums(nums.begin(),nums.end());
    sort(copyNums.begin(),copyNums.end());

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<copyNums.size();j++){
            if(nums[i]==copyNums[j]){
                nums[i]=j;
            }
        }
    }
    cout<<endl;
    for(int el:nums){
        cout<<el<<" ";
    }
}