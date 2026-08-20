/*
First negative number in every window of size k
*/

#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int k=3;
    vector<int> ans;

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                ans.push_back(arr[j]);
                break;
            }
        }
    }
    


    for(auto el:ans){
        cout<<el<<" ";
    }
}
