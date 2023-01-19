									Inorder Traversal
class Solution {
public:
    vector<int>display;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        display.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return display;
    }
};
									Preorder Traversal
class Solution {
public:
    vector<int>display;
    void preorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        display.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return display;
    }
};
									PostOrder Traversal
class Solution {
public:
vector<int>display;
void postorder(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    display.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return display;
    }
};
