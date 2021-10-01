#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    /* Logic: recursive solution, where every subtree is also validated for BST */
    bool isValidBST(TreeNode *root)
    {

        return isValidSubBST(root, NULL, NULL);
    }

    //Helper function
    bool isValidSubBST(TreeNode *root, TreeNode *maxNode, TreeNode *minNode)
    {
        if (root == NULL)
            return true;

        if (maxNode && root->val >= maxNode->val)
            return false;

        if (minNode && root->val <= minNode->val)
            return false;

        return isValidSubBST(root->left, root, minNode) && isValidSubBST(root->right, maxNode, root);
    }
};

int main()
{
    TreeNode* root = new TreeNode(5);
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node6 = new TreeNode(6);

    root->left = node1;
    root->right = node4;

    node4 -> left = node3;
    node4 -> right = node6;

    /*
            5
          /   \
        1       4
              /   \
            3       6
    */

   Solution sol;
   cout<<sol.isValidBST(root);  //displays False since, 3 < 5 and is on right side of 5

   return 0;

}