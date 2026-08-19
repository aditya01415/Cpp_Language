/*
maximum sum sub array of size k
*/

#include<iostream>
#include<limits.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int k=4;

    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int i=1;
    int j=k;
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(sum>maxSum){
            maxSum=sum;
            maxIdx=i;
        }
        i++;
        j++;
    }


    cout<<maxIdx<<"-->"<<maxSum;
}
