#include <bits/stdc++.h>
using namespace std;

// Program to find Least Common Ancestor of any 2 nodes in a BST, using the BST's properties

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
    TreeNode *ans;
    bool helper(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (!root)
            return false;
        int p1 = helper(root->left, p, q) ? 1 : 0;
        int q1 = helper(root->right, p, q) ? 1 : 0;
        int r = (root == p || root == q) ? 1 : 0;
        // If the sum >= 2, means its the LCA
        if ((p1 + q1 + r) >= 2)
        {
            //cout<<p1+q1+r<<" "<<root->val;
            ans = root;
        }
        return (p1 + q1 + r > 0);
    }
    bool recurse(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr)
            return false;
        // Left Recursion. If left recursion returns true, set left = 1 else 0
        int left = recurse(root->left, p, q) ? 1 : 0;

        // Right Recursion
        int right = recurse(root->right, p, q) ? 1 : 0;

        // If the current node is one of p or q
        int mid = (root == p || root == q) ? 1 : 0;

        // If any two of the flags left, right or mid become True
        if (mid + left + right >= 2)
        {
            ans = root;
        }

        // Return true if any one of the three bool values is True.
        return (mid + left + right > 0);
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr)
            return root;
        ans = NULL; 
        helper(root, p, q);
        return ans;
    }
};

int main()
{
    // constructing the BST, with node6 as node
    TreeNode* node0 = new TreeNode(0);
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(8);
    TreeNode *node9 = new TreeNode(9);

    node6->right = node8;
    node6->left = node2;

    node2->left = node0;
    node2->right= node4;

    node4->left = node3;
    node4->right = node5;

    node8->left = node7;
    node8->right = node9;

    /*
                  6
                /   \
              2       8
             / \      / \
             0  4     7  9
               / \
               3  5
    */

    Solution sol;
    cout << sol.lowestCommonAncestor(node6, node2, node4); //Answer is node 2 itself, since its a parent of node4

}