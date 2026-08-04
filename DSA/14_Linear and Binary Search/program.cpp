
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums,int target){
    int idx=-1;

    int lo=0;
    int hi=nums.size()-1;

    while(lo<=hi){
        // int mid=(lo+hi)/2;
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) {
          return mid;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }
    return idx;
}
int main(){
    vector<int> nums={-1,0,3,5,9,12};
    int target=9;

    cout<<search(nums,target);
}