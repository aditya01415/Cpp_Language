/*
Ques : Merge two sorted arrays .
*/



#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int>& v1,vector<int>& v2){
       int m=v1.size();
       int n=v2.size();
       int p=m+n;

       vector<int> v(p);
       int i=m-1;
       int j=n-1;
       int k=p-1;

       while(i>=0 && j>=0){
         if(v1[i]>v2[j]){
            v[k]=v1[i];
            i--;
         } else {
            v[k]=v2[j];
            j--;
         }
         k--;
       }

      if(i==0){
        while(i>=0){
            v[k]=v1[i];
            i--;
            k--;
        }
      }
      if(j==0){
        while(j>=0){
            v[k]=v2[j];
            j--;
            k--;
        }
      }
       


    return v;

}
int main(){
    vector<int> arr1={1,4,5,8};
    vector<int> arr2={2,3,6,7,10};
    display(arr1);
    display(arr2);
    
   vector<int> v=merge(arr1,arr2);
    
    display(v);
    
}