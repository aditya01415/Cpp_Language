/*
Ques: Remove all the elements present at even positions in queue. Consider 0-based indexing.
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int size=q.size();
    for(int i=0;i<size;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }

    cout<<endl;
}
void remove(queue<int>& q){
    int size=q.size();
     for(int i=0;i<size;i++){
       if(i%2==0){
          q.pop();
       } else{
        int x=q.front();
        q.pop();
        q.push(x);
       }
    }

    
}
int main(){
    queue<int> q;
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    remove(q);
    display(q);
}