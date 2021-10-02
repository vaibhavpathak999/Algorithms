TreeNode<int>* helper(int *input , int si , int end)
{
    if(si>end)
    {
        return NULL;
    }
    int mid = (si+end)/2;
    
    TreeNode<int>* root = new TreeNode<int> (input[mid]);
  
    root->left = helper(input , si , mid-1);
    root->right =helper(input , mid+1 , end);
    return root;
}
TreeNode<int>* constructTree(int *input, int n) {
    if(n==0)
    {
        return NULL;
    }
    TreeNode<int>* ans = helper(input , 0 , n-1);
    return ans ;
}
