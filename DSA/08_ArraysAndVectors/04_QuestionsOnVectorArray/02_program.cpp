/*
Ques : Sort the array of 0’s and 1’s .
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    int noz=0;
    int no1=0;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else no1++;
    }
    int i;
    for(i=0;i<noz;i++){
        v[i]=0;
    }
   
    for(int j=i;j<no1+noz;j++){
        v[j]=1;
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}