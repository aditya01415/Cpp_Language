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
void preorder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void nthLevel(TreeNode* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
    
}
void nthLevelRev(TreeNode* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right,curr+1,level);
    nthLevelRev(root->left,curr+1,level);
    
}
int levelOfTree(TreeNode* root){
    if(root==NULL) return 0;
    return 1+(max(levelOfTree(root->left),levelOfTree(root->right)));
}

void levelOrder(TreeNode* root){
       int n=levelOfTree(root);
       for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
       }

}
void levelOrderRev(TreeNode* root){
       int n=levelOfTree(root);
       for(int i=1;i<=n;i++){
        nthLevelRev(root,1,i);
       }

}

void levelOrderQueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
void levelOrderQueueRev(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
}

int main(){
       TreeNode* a=new TreeNode(1);
       TreeNode* b=new TreeNode(2);
       TreeNode* c=new TreeNode(3);
       TreeNode* d=new TreeNode(4);
       TreeNode* e=new TreeNode(5);
       TreeNode* f=new TreeNode(6);
       TreeNode* g=new TreeNode(7);

      a->left=b;
      a->right=c;
      b->left=d;
      b->right=e;
      c->left=f;
      c->right=g;
      preorder(a);
      cout<<endl;
      inorder(a);
      cout<<endl;
      postorder(a);
      cout<<endl;
      nthLevel(a,1,1);
      nthLevel(a,1,2);
      nthLevel(a,1,3);
      cout<<endl;
      cout<<levelOfTree(a)<<endl;
      levelOrder(a);
      cout<<endl;
      levelOrderRev(a);
      cout<<endl;
      levelOrderQueue(a);
      cout<<endl;
      levelOrderQueueRev(a);
}