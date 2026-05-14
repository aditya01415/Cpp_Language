/*
Ques : Write a program to reverse the array without
using any extra array.
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

// void swap(int* a,int* b){
//     int temp=*a;
//     *b=*a;
//     *b=temp;
// }


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    
    display(v);
    /*
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        // swap(v[i],v[j]);
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    */

   for(int i=0,j=v.size()-1;i<=j;i++,j--){
    int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
   }
    display(v);

}
