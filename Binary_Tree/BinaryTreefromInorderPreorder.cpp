#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int pre_idx = 0;
    vector<int> preorder;
    vector<int> inorder;
    map<int, int> idx_map;

    TreeNode *helper(int in_left, int in_right)
    {
        // if there is no elements to construct subtrees
        if (in_left == in_right)
            return nullptr;

        // pick up pre_idx element as a root
        int root_val = preorder[pre_idx];
        TreeNode *root = new TreeNode(root_val);

        // root splits inorder list
        // into left and right subtrees
        int index = idx_map[root_val];

        // recursion
        pre_idx++;
        // build left subtree
        root->left = helper(in_left, index);
        // build right subtree
        root->right = helper(index + 1, in_right);

        return root;
    }

    TreeNode *buildTree(vector<int> &pre, vector<int> &in)
    {
        preorder = pre;
        inorder = in;

        // build a hashmap value -> its index
        int idx = 0;
        for (auto val : inorder)
            idx_map.insert({val, idx++});
        return helper(0, inorder.size());
    }
};

int main()
{
    Solution sol;
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> preorder = {3, 9, 20, 15, 7};
    TreeNode *root = sol.buildTree(inorder, preorder);
    return 0;
}

/* Practise question link online for reference: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/ */