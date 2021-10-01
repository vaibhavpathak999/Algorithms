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
    int post_idx;
    vector<int> postorder;
    vector<int> inorder;
    map<int, int> idx_map;

    TreeNode *helper(int in_left, int in_right)
    {
        // if there is no elements to construct subtrees
        if (in_left > in_right)
            return nullptr;

        // pick up post_idx element as a root
        int root_val = postorder[post_idx];
        TreeNode *root = new TreeNode(root_val);

        // root splits inorder list
        // into left and right subtrees
        int index = idx_map[root_val];

        // recursion
        post_idx--;
        // build right subtree
        root->right = helper(index + 1, in_right);
        // build left subtree
        root->left = helper(in_left, index - 1);
        return root;
    }

    TreeNode *buildTree(vector<int> &in, vector<int> &post)
    {
        postorder = post;
        inorder = in;
        // start from the last postorder element
        post_idx = postorder.size() - 1;

        // build a hashmap value -> its index
        int idx = 0;
        for (auto val : inorder)
            idx_map.insert({val, idx++});
        return helper(0, inorder.size() - 1);
    }
};

int main()
{
    Solution sol;
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    TreeNode *root = sol.buildTree(inorder, postorder);
    return 0;
}

/* Practise question link online for reference: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/ */