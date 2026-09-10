#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
     int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int n){
        this->f=0;
        this->b=0;
        this->s=0;
        vector<int> num(n);
        arr=num;
    }

    void push(int val){
        if(b==arr.size()) {
            cout<<"Queue is Full"<<endl;
            return;
        }
        arr[b]=val;
        s++;
        b++;
    }
    void pop(){
        if(s==0) {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){
         if(s==0) {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
         if(s==0) {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(50);

    q.display();
    cout<<q.size()<<endl;
    q.pop();

    q.display();
    cout<<q.size()<<endl;

}