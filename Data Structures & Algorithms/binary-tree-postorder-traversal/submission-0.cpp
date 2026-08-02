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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;

        TreeNode*lastvis=nullptr;
        TreeNode*curr=root;

        while(curr!=nullptr||!st.empty()){
            while(curr!=nullptr){
                st.push(curr);
                curr=curr->left;
            }

            TreeNode*node=st.top();

            if(node->right!=nullptr && node->right!=lastvis){
                curr=node->right;
            }else{
                result.push_back(node->val);
                lastvis=node;
                st.pop();
            }
        }
        return result;
    }
};