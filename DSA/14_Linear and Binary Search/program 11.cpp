
/*
Search in rotated sorted array
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={33,1,2,3,5};
    int target =33;

    int lo=0;
    int hi=nums.size()-1;

    int pivot=-1;

    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]>nums[hi]) lo=mid+1;
        else hi=mid; 
    }
    pivot=lo;

    if(target>= nums[0] && target<=nums[pivot-1]){
        lo=0;
        hi=pivot-1;
         while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target){
            cout<<mid;
            break;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
        
    } 
    } else {
        lo=pivot;
        hi=nums.size()-1;
         while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target){
            cout<<mid;
            break;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }

}
}