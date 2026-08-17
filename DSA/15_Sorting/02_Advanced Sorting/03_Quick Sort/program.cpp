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
    
    int pivotIndex=startIdx+count;
    swap(arr[(startIdx+endIdx)/2],arr[pivotIndex]);

    int i=startIdx;
    int j=endIdx;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<arr[pivotIndex]) i++;
        else if(arr[j]>arr[pivotIndex]) j--;
        else if(arr[i]>arr[pivotIndex] && arr[j]<=arr[pivotIndex]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
    }

    return pivotIndex;
}
void quickSort(int arr[],int startIdx,int endIdx){
    if(startIdx>=endIdx) return;

    int pivotIdx=partition(arr,startIdx,endIdx);

    quickSort(arr,startIdx,pivotIdx-1);
    quickSort(arr,pivotIdx+1,endIdx);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}