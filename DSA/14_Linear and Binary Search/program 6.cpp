

/*
Ques : Given a sorted array of non-negative 
distinct integers, find the smallest missing 
non-negative element in it
*/

#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,4,8,9};
    int n=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<n;i++){
        if(i!=nums[i]) {
            cout<<i;
            break;
        }
    }
    cout<<endl;
}