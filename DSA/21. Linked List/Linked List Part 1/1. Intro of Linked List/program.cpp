
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
int main(){
    //10 20 30 40
    /*
    Node a;
    a.val=10;
    Node b;
    b.val=20;
    Node c;
    c.val=30;
    Node d;
    d.val=40;
    */
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // d.next=NULL;

    cout<<b.val<<endl;
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;
    cout<<((a.next)->next)->val<<endl;
    cout<<(a.next)->next->val<<endl;
    cout<<(a.next)->next->next->val<<endl;
    cout<<(*(*(*a.next).next).next).val<<endl;
    
}