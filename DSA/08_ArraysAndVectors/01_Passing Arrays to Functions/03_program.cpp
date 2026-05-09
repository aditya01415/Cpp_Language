
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,12,9,8,2};
    int* ptr=arr;
    cout<<ptr<<endl;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr=8;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    *ptr=0;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<ptr<<endl;
    ptr=arr;
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<i[ptr]<<" ";
    }
}