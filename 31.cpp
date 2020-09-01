/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root ) return root;
         TreeNode * p, *rr;
        if(root->val==key) 
        {
            if(root->left ==NULL && root->right ==NULL) return NULL;
            if(root->right==NULL) return root->left;
           rr=root->right;
            p=rr;
            while(rr && rr->left)
            {
                p=rr;rr=rr->left;
            }
            if(p==rr)
            {
                p->left=root->left;
                return p;
            }
            rr->left=root->left;
            p->left=rr->right;
            rr->right=root->right;
            return rr;
        }
        else if(root->val > key)
        {
            root->left=deleteNode(root->left,key);
           
        }
        else
        {
            root->right=deleteNode(root->right, key);
          
        }
        return root;
        
    }
};
