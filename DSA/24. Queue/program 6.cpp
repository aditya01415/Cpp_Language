#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int n;
    Queue(){
        this->n=0;
        this->head=NULL;
        this->tail=NULL;
    }
    void push(int val){
        Node* t=new Node(val);
        if(n==0){
            head=tail=t;
            n++;
        } else{
            tail->next=t;
            tail=t;
            n++;
        }

    }
    void pop(){
        if(n==0){
            cout<<"Queue Is Empty";
            return;
        }
        Node* temp=head; 
        head=head->next;
        n--;
        delete(temp);
    }
    int front(){
        if(n==0){
            cout<<"Queue Is Empty";
            return -1;
        } 
        return head->val;
    }
    int back(){
        if(n==0){
            cout<<"Queue Is Empty";
            return -1;
        } 
        return tail->val;
    }
    int size(){
        return n;
    }
    bool empty(){
        if(n==0) return true;
        else return false;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
   Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(50);

    q.display();
    cout<<q.size()<<endl;
    q.pop();

    // q.display();
    cout<<q.size()<<endl;

}