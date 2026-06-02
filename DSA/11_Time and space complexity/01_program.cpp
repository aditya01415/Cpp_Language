#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={6,3,2,4,1,7,1,5};

    //Brute Force
    /*
    bool flag=false;
    int ans;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size()-1;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<arr[i]<<endl;
                break;
            }
        }
        if(flag) break;
    }
    */
   //Another Method
   /*
   vector<int> check(arr.size(),0);
   for(int i=0;i<check.size();i++){
      if(check[arr[i]]==1){
        cout<<arr[i]<<endl;
        break;
      } else {
         check[arr[i]]=1;
      }
   }
   */
   //Another way Using of Math
   int sum=0;
   int math_sum=(arr.size()-1)*(arr.size()-1+1)/2;
   for(int i=0;i<arr.size();i++){
    sum+=arr[i];
   }

   cout<<sum-math_sum<<endl;
}