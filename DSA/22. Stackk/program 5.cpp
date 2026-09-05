#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(auto el:arr){
        cout<<el<<" ";
    }
    cout<<endl;
    int ans[n];
  
    // Brute Force
    
    // for(int i=0;i<n;i++){
    //     ans[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //        if(arr[j]>arr[i]){
    //           ans[i]=arr[j];
    //           break;
    //        }
    //     }
    // }

   

    //By stack 
    stack<int> st;
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
      while(st.size()>0 && st.top()<=arr[i]) st.pop();
      if(st.size()==0) ans[i]=-1;
      else ans[i]=st.top();
      st.push(arr[i]);
    }

    for(auto el:ans){
        cout<<el<<" ";
    }
    cout<<endl;
}