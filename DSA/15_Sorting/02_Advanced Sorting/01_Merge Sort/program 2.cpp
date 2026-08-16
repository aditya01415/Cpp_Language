//Merge array

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& result){
    int i=0;
    int j=0;
    int k=0;
   
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) result[k++]=a[i++];
        else result[k++]=b[j++]; 
    }

    if(i==a.size())
        while(j<b.size()) result[k++]=b[j++];

    if(j==b.size())
        while(i<a.size()) result[k++]=a[i++];
}
int main(){
    int arr[]={1,4,5,8};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int brr[]={2,3,6,7,10,12};
    int n2=sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr,arr+n1);
    vector<int> b(brr,brr+n2);
    vector<int> result(n1+n2);
    merge(a,b,result);

    for(int i=0;i<(n1+n2);i++){
        cout<<result[i]<<" ";
    }
}