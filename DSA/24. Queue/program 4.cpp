#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int n;
    Deque(){
        this->n=0;
        this->head=NULL;
        this->tail=NULL;
    }
    void pushFront(int val){
        Node* t=new Node(val);
        if(n==0){
            head=tail=t;
            n++;
        } else{
            t->next=head;
            head->prev=t;
            head=t;
            n++;
        }

    }
    void pushBack(int val){
        Node* t=new Node(val);
        if(n==0){
            head=tail=t;
            n++;
        } else{
            tail->next=t;
            t->prev=tail;
            tail=t;
            n++;
        }

    }
    void popFront(){
        if(n==0){
            cout<<"Queue Is Empty";
            return;
        }
        Node* temp=head; 
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        n--;
        delete(temp);
    }
    void popBack(){
        if(n==0){
            cout<<"Queue Is Empty";
            return;
        }
        Node* temp=tail; 
        tail->prev->next=NULL;
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
   Deque dq;
    
   dq.pushBack(10);
   dq.pushBack(20);
   dq.pushBack(30);
   dq.pushBack(40);
   dq.display();
   dq.pushFront(11);
   dq.display();
   dq.popBack();
   dq.popFront();
   dq.display();
}