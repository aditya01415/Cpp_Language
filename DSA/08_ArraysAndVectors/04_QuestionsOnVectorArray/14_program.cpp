
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

void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        
            swap(&v[i],&v[j]);
            j--; 
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

    if(idx==-1){
        reversePart(0,n-1,v);
        return;
    } 
    reversePart(idx+1,n-1,v);
    int j=-1;
    for(int i=idx+1;i<n;i++){
       if(v[i]>v[idx]){
        j=i;
        break;
       }
    }
    
    swap(v[idx],v[j]);

    
}

int main(){
    vector<int> v={2,3,1};
    display(v);
    next_permutation(v);
    display(v);

}