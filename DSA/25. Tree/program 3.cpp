#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left; 
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

class Solution{
public:
  TreeNode* predecessor(TreeNode* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
   }
  TreeNode* successor(TreeNode* root){
    root=root->right;
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
   }

};

int main(){
       TreeNode* a=new TreeNode(50);
       TreeNode* b=new TreeNode(30);
       TreeNode* c=new TreeNode(70);
       TreeNode* d=new TreeNode(20);
       TreeNode* e=new TreeNode(40);
       TreeNode* f=new TreeNode(60);
       TreeNode* g=new TreeNode(80);

      a->left=b;
      a->right=c;
      b->left=d;
      b->right=e;
      c->left=f;
      c->right=g;
      
    Solution s1;
    cout<<s1.predecessor(a)->val<<endl;
    cout<<s1.successor(a)->val;
    
}
