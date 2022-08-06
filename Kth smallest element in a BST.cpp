class Solution {
     int ans=-1;
    int count=1;
  public:
    // Return the Kth smallest element in the given BST
    /*void inorder(Node* root,vector<int>&v){
        if(root==NULL)return;
        
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    */
   
    int KthSmallestElement(Node *root, int K) {
        if(root==NULL)return 0;
       KthSmallestElement(root->left,K);
       if(count==K){
           ans=root->data;
       }
       count++;
       KthSmallestElement(root->right,K);
        return ans;
    }
};
