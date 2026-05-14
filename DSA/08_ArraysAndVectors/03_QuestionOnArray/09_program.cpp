/*
Ques : Rotate the given array ‘a’ by k steps, where k is
non-negative.
*/


#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}

void reverse(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
       int temp=v[i];
       v[i]=v[j];
       v[j]=temp;
       i++;
       j--;
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    display(v);
    int n=v.size();
    if(k>n){
      k=k%n;
    }
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    // reverse(v);
    reversePart(0,n-1,v);
    display(v);

}
