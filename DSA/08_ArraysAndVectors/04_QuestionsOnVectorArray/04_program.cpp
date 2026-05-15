/*
Ques : Sort the array of 0’s and 1’s .
*/

#include<iostream>
#include<vector>
using namespace std;

void sort02(vector<int>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
               int temp=v[i];
               v[i]=v[j];
               v[j]=temp;
            } 
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
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

    sort02(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}