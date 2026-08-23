/*
Given an integer array nums, in which exactly two elements 
appear only once and all the other elements appear exactly 
twice. Find the two elements that appear only once
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxLenSubarray(vector<int>& arr){
    int maxLen=INT_MIN;
    int maxVal=0;
    int count=0;
    int i=0;
    while(i<arr.size()){
        
        if(arr[i]>maxVal){
            maxVal=arr[i];
            count=1;
        } else if(arr[i]==maxVal){
            count++;
        }
        maxLen=max(maxLen,count);
        i++;
    }
    return maxLen;
    

}
int main(){
   vector<int> arr={12,3,1,6,1,6,6,6,6,4,3,8,13,13,13,8};
   cout<<maxLenSubarray(arr);
}