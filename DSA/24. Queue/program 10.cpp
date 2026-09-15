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
void reverse(queue<int>& q){
    stack<int> st;
    int size=q.size();
     for(int i=0;i<size;i++){
       st.push(q.front());
        q.pop();
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
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
    reverse(q);
    display(q);
}