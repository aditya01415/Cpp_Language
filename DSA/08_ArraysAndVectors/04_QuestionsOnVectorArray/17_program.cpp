/*
previous greatest element and next greatest element
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> arr(height.size());
    vector<int> brr(height.size());

    int pmax=-1;
    for(int i=0;i<arr.size();i++){
        arr[i]=pmax;
        if(height[i]>pmax) pmax=height[i];
    }
    int nmax=-1;
    for(int i=brr.size()-1;i>=0;i--){
        brr[i]=nmax;
        if(height[i]>nmax) nmax=height[i];
    }


    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
}                   