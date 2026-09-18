#include<iostream>
#include<climits>
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
void display(TreeNode* root){
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
TreeNode* constructTree1(vector<int>& tree){
    queue<TreeNode*> q;
    TreeNode* root=new TreeNode(tree[0]);
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<tree.size()){
        TreeNode* temp=q.front();
        q.pop();
       TreeNode* l;
        TreeNode* r;
        if(tree[i]!=INT_MIN) l=new TreeNode(tree[i]); 
        else l=NULL;
        if(j!=tree.size() && tree[j]!=INT_MIN) r=new TreeNode(tree[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }

    return root;
}
TreeNode* constructTree1(int arr[],int n){
    queue<TreeNode*> q;
    TreeNode* root=new TreeNode(arr[0]);
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<n ){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MIN) l=new TreeNode(arr[i]); 
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new TreeNode(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }

    return root;
}
int main(){
    vector<int> tree={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root1=constructTree1(tree);
    display(root1);
    cout<<endl;
    TreeNode* root=constructTree1(arr,size);
    display(root);
}