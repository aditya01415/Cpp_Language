#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,4,5,3,7,8,2};
    vector<int> brr(arr.size(),0);
    for(int el:arr){
        cout<<el<<" ";
    }
    cout<<endl;
    brr[0]=arr[0];
    for(int i=1;i<brr.size();i++){
        brr[i]=brr[i-1]+arr[i];
    }
     for(int el:brr){
        cout<<el<<" ";
    }
}