/*
Ques : Move all negative numbers to beginning and 
positive to end with constant extra space.
*/



#include<iostream>
#include<vector>
using namespace std;

void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}

void sorting(vector<int>& v){
    int i=0;
    int j=v.size()-1;

    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;

        if(v[i]>0 && v[j]<0){
            swap(&v[i],&v[j]);
            i++;
            j--;
        }
    }
    return;
    
}

int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-8);
    v.push_back(3);
    v.push_back(1);
    v.push_back(-6);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sorting(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}