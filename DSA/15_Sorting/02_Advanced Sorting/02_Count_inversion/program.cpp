/*
Count Inversions
Two elements of an array a, a[i] and a[j] form an inversion if a[i] > 
a[j] and i < j. Given an array of integers. Find the Inversion Count in 
the array.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   vector<int> v(arr,arr+n);

   for(int el:v){
    cout<<el<<" ";
   }
   cout<<endl;

   int count=0;

   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]>v[j]){
            count++;
        }
    }
   }

   cout<<count;
}