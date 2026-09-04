
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
class DLL{
public:
    Node* head;
    Node* tail;
    int size;

    DLL(){
        head=tail=NULL;
        size=0;
    }

    void insertAtTail(int val){
         Node* temp=new Node(val);
          if(size==0){
            head=tail=temp;
          } else{
             tail->next=temp;
             temp->prev=tail;
             tail=temp;
          }
        size++;

    }
    void insertAtHead(int val){
         Node* temp=new Node(val);
          if(size==0){
            head=tail=temp;
          } else{
             temp->next=head;
             head->prev=temp;
             head=temp;
          }
        size++;

    }
    void insertAtIdx(int idx,int val){
         if(idx<0 && idx>size) cout<<"Invalid index"<<endl;
         if(idx==0) insertAtHead(val);
         else if(idx==size) insertAtTail(val); 
         else{
             Node* newNode=new Node(val);
             Node* temp=head;
             for(int i=1;i<idx;i++){
                temp=temp->next;
             }
             newNode->next=temp->next;
             temp->next=newNode;
             newNode->prev=temp;
             newNode->next->prev=newNode;
             
          }
        size++;

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
     DLL list;
     list.insertAtTail(10);
     list.insertAtTail(20);
     list.insertAtTail(30);
     list.insertAtTail(40);
     list.insertAtTail(50);
     list.display();
     list.insertAtTail(40);
     list.display();
     list.insertAtHead(60);
     list.display();
     list.insertAtIdx(2,80);
     list.display();
}