/*
Given an integer array nums, in which exactly two elements 
appear only once and all the other elements appear exactly 
twice. Find the two elements that appear only once
x^x=0
0^x=x
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findUniqueElement(vector<int>& arr){
    int res=arr[0];
    for(int i=1;i<arr.size();i++){
        res=res^arr[i];
    }
    int temp=res;
    int k=0;
    while(true){
        if((temp&1)==1){
            break;
        }
        temp=temp>>1;
        k++;
    }
    int ans1=0;
    for(int num:arr){
        if(((num>>k)&1)==1) ans1=ans1^num;
    }
    int ans2=ans1^res;
    return {ans1,ans2}; 

}
int main(){
   vector<int> arr={1,2,1,2,3,5};
   vector<int> ans=findUniqueElement(arr);
   for(auto el:ans){
    cout<<el<<" ";
   }
}