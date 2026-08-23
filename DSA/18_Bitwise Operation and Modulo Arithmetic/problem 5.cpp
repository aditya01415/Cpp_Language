/*
Given an integer array where every element occurs twice 
except one occurs only once. Find that unique element.
x^x=0
0^x=x
*/

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>& arr){
    int res=arr[0];
    for(int i=1;i<arr.size();i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
   vector<int> arr={2,1,3,2,1,5,5,6,3};
   cout<<findUniqueElement(arr)<<endl;
}