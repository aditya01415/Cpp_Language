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
#include<unordered_map>
using namespace std;
int main(){
    vector<int> nums={19,12,23,8,16};
    
    for(int el:nums){
        cout<<el<<" ";
    }
    vector<int> copyNums(nums.begin(),nums.end());
    sort(copyNums.begin(),copyNums.end());

    unordered_map<int,int> map;

    for(int i=0;i<copyNums.size();i++){
        map[copyNums[i]]=i;
    }

    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        if(map.find(num)!=map.end()){
            nums[i]=map[num];
        }
    }
    cout<<endl;
    for(int el:nums){
        cout<<el<<" ";
    }
}