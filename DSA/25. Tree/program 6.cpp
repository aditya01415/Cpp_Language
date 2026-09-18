#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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
vector<int> preOrderDisplay(TreeNode* root){
       stack<TreeNode*> st;
       if(root!=NULL) st.push(root);
       vector<int> ans;
       while(st.size()>0){
          TreeNode* temp=st.top();
          st.pop();
          
          ans.push_back(temp->val);

          if(temp->right!=NULL) st.push(temp->right);
          if(temp->left!=NULL) st.push(temp->left);
       }

       return ans;
}
vector<int> postOrderDisplay(TreeNode* root){
     stack<TreeNode*> st;
       if(root!=NULL) st.push(root);
       vector<int> ans;
       while(st.size()>0){
          TreeNode* temp=st.top();
          st.pop();
          
          ans.push_back(temp->val);

          if(temp->left!=NULL) st.push(temp->left);
          if(temp->right!=NULL) st.push(temp->right);
       }
       reverse(ans.begin(),ans.end());

       return ans;
}
vector<int> inOrderDisplay(TreeNode* root){
     stack<TreeNode*> st;
     TreeNode* node=root;
       vector<int> ans;
       while(st.size()>0 || node!=NULL){
         if(node!=NULL){
            st.push(node);
            node=node->left;
         } else{
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            node=temp->right;
         }
       }

       return ans;
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

      vector<int> x= preOrderDisplay(a);
      for(auto el:x){
        cout<<el<<" ";
      }
      cout<<endl;
      vector<int> y= postOrderDisplay(a);
      for(auto el:y){
        cout<<el<<" ";
      }
      cout<<endl;
      vector<int> z= inOrderDisplay(a);
      for(auto el:z){
        cout<<el<<" ";
      }
      cout<<endl;
      
}