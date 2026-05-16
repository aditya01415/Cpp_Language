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
       int i=0;
       int j=0;
       int k=0;
       
        while(i+j < m+n){
        if(v1[i]<v2[j] && i<m){
            v[k]=v1[i];
            i++;
            k++;
        } else {
            v[k]=v2[j];
            j++;
            k++;
        }
    }

    return v;

}
int main(){
    vector<int> arr1={1,4,5,8};
    vector<int> arr2={2,3,6,7,10,12,14,16};

    
   vector<int> v=merge(arr1,arr2);
    display(arr1);
    display(arr2);
    display(v);
    
}