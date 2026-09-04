

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
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayRev(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayRecRev(Node* head){
    if(head==NULL) return;
    displayRecRev(head->next);
    cout<<head->val<<" ";
}
int main(){
      Node* a=new Node(10);
      Node* b=new Node(20);
      Node* c=new Node(30);
      Node* d=new Node(40);
      Node* e=new Node(50);

      a->next=b;
      b->prev=a;
      b->next=c;
      c->prev=b;
      c->next=d;
      d->prev=c;
      d->next=e;
      e->prev=d;
      display(a);
      displayRec(a);
      cout<<endl;
      displayRecRev(a);
      cout<<endl;
      displayRev(e);
}