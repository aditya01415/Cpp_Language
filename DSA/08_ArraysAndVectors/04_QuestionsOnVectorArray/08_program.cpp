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
int main(){
    vector<int> v1={1,4,5,8};
    vector<int> v2={2,3,6,7,10,12,14,16};

    int m=v1.size();
    int n=v2.size();
   
    vector<int> v3(m+n);

    int i=0;
    int j=0;
    int k=0;

    while(i+j < m+n){
        if(v1[i]<v2[j] && i<m){
            v3[k]=v1[i];
            i++;
            k++;
        } else {
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    
    display(v1);
    display(v2);
    display(v3);
    
}