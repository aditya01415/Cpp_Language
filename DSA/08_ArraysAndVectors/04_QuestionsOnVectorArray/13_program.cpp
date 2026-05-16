
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sorted(vector<int>& v){
    int i=0;
    int j=v.size()-1;

    while(i<=j){
        if(v[i]>v[j]){
            swap(&v[i],&v[j]);
            j--;          
        } 
        i++;
        
       
    }
}

void next_permutation(vector<int>& v){
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }

    if(idx==n-2){
       swap(v[idx],v[idx+1]);
   
    }
    else {
       
         vector<int> v1;

    for(int i=idx+1;i<v.size();i++){
        v1.push_back(v[i]);
    }

    sorted(v1);

    for(int i=idx;i<v.size();i++){
        v[i+1]=v1[i];
    }

    swap(v[idx],v[idx+1]);
    }
}

int main(){
    vector<int> v={1,2,4,3};
    display(v);
    next_permutation(v);
    display(v);

}