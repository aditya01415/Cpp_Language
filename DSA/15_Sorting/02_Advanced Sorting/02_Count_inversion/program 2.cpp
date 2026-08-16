//Merge array

#include<iostream>
#include<vector>
using namespace std;
// int count=0;
void merge(vector<int>& a, vector<int>& b, vector<int>& result){
    int i=0,j=0,k=0;
   
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) result[k++]=a[i++];
        else result[k++]=b[j++]; 
    }

    if(i==a.size())
        while(j<b.size()) result[k++]=b[j++];

    if(j==b.size())
        while(i<a.size()) result[k++]=a[i++];
}
int inversion(vector<int> a,vector<int> b){
    int i=0,j=0;
    int count=0;

    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        } else{
            i++;
        }
    }
    return count;
}
int mergeSort(vector<int>& v){
    int n=v.size();
    int count=0;
    int n1=n/2,n2=n-n/2;
    if(n==1) return 0;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    count+=mergeSort(a);
    count+=mergeSort(b);
    
    count+=inversion(a,b);
    merge(a,b,v);
    return count;
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    for(int el:v){
        cout<<el<<" ";
    }
    cout<<endl;
    
    cout<<mergeSort(v)<<endl;

}