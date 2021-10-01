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

/* Logic in brief: Doing level order traversal, and then picking the rightmost at each level in answer */
const int N = 1e5 + 3;
class Solution
{
public:
    vector<int> lvl[N];
    int n;
    void bfs(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        n = 1;
        lvl[1].push_back(root->val);
        while (!q.empty())
        {
            TreeNode *curr;
            n++;
            int t = q.size();
            for (int i = 0; i < t; i++)
            {
                curr = q.front();
                q.pop();

                if (curr->left != nullptr)
                {
                    q.push(curr->left);
                    lvl[n].push_back(curr->left->val);
                }
                if (curr->right != nullptr)
                {
                    q.push(curr->right);
                    lvl[n].push_back(curr->right->val);
                }
            }
        }
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        bfs(root);

        for (int i = 1; i <= n; i++)
        {
            if (lvl[i].size() > 0)
            {
                int x = lvl[i].size();
                ans.push_back(lvl[i][x - 1]);
            }
        }
        return ans;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    root->left = node2;
    root->right = node3;
    node2->right = node5;
    node3->right = node4;

    Solution sol;
    vector<int> rightside = sol.rightSideView(root);

    cout << "Printing the right side view of the above tree \n";
    for (int x : rightside)
        cout << x << " ";
}

/* Practise question link online for reference: https://leetcode.com/problems/binary-tree-right-side-view/ */