

/*
Ques :Given an array, arr[] containing ‘n’ integers, the 
task is to find an integer (say K) such that after 
replacing each and every index of the array by |ai
 – K| 
where ( i ∈ [1, n]), results in a sorted array. If no such 
integer exists that satisfies the above condition then 
return -1. Find the range of K'
*/

#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[]={5,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    float kMin=(float)(INT_MIN);
    float kMax=(float)(INT_MAX);
    bool flag=true;

    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
          kMin=max(kMin,(arr[i]+arr[i+1])/2.0);
        } else {
            kMax=min(kMax,(arr[i+1]+arr[i])/2.0);
        }
        if(kMin>kMax){
            flag=false;
            break;
        }
    }
    if(!flag) cout<<-1;
    else if(kMax==kMin){
        if((kMin-(int)kMin)==0){
        cout<<"There is only one value of k : "<<kMin;
        } else{
            cout<<-1;
        }
    } else{
         if((kMin-(int)kMin)>0){
            kMin=(int)kMin+1;
         }
         cout<<"Range of k is : ["<<kMin<<","<<(int)kMax<<"]";
    }
}