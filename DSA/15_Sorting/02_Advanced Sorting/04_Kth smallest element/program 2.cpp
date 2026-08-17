//Quick Sort 


#include<iostream>
using namespace std;
int partition(int arr[],int startIdx,int endIdx){
    int pivotElement=arr[(startIdx+endIdx)/2];
    int count=0;

    for(int i=startIdx;i<=endIdx;i++){
        if(i==((startIdx+endIdx)/2)) continue;
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    int pivotIdx=startIdx+count;
    swap(arr[pivotIdx],arr[(startIdx+endIdx)/2]);

    int i=startIdx;
    int j=endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<arr[pivotIdx]) i++;
        else if(arr[j]>arr[pivotIdx]) j--;
        else if(arr[i]>arr[pivotIdx] && arr[j]<=arr[pivotIdx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int kthSmallest(int arr[],int startIdx,int endIdx,int k){

    int pivotIdx=partition(arr,startIdx,endIdx);

    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1<k) return kthSmallest(arr,pivotIdx+1,endIdx,k);
    else return kthSmallest(arr,startIdx,pivotIdx-1,k);
    
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    cout<<kthSmallest(arr,0,n-1,k);
    
}