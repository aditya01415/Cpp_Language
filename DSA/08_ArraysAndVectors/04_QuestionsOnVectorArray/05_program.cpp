/*
Ques : Sort the array of 0’s and 1’s .
*/

#include<iostream>
#include<vector>
using namespace std;

void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=*a;
    return;
}

void sort02(vector<int>& v){
   int i=0;
   int j=v.size()-1;

//    while(i<j){
//       if(v[j]==1) j--;
//       if(v[i]==0) i++;
//       if(i>j) break;
//       if(v[i]==1 && v[j]==0){
//         // swap(v[i],v[j]);
//         v[i]=0;
//         v[j]=1;
//         i++;
//         j--;
//       }
//    }
//    while(i<j){
//       if(v[j]==1) j--;
//       else if(v[i]==0) i++;
//       else if(v[i]==1 && v[j]==0){
//         // swap(v[i],v[j]);
//         v[i]=0;
//         v[j]=1;
//         i++;
//         j--;
//       }
//    }
//    while(i<j){
//       if(v[j]==1) j--;
//       if(v[i]==0) i++;
//       else if(v[i]==1 && v[j]==0){
//         // swap(v[i],v[j]);
//         v[i]=0;
//         v[j]=1;
//         i++;
//         j--;
//       }
//    }
   while(i<j){
     if(v[i]==1 && v[j]==0){
        // swap(v[i],v[j]);
        v[i]=0;
        v[j]=1;
        i++;
        j--;
      }

      if(v[j]==1) j--;
      if(v[i]==0) i++;
    
   }

   return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    int noz=0;
    int no1=0;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort02(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}