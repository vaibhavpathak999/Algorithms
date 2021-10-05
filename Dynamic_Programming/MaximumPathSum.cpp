#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define double long double
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define INF INT_MAX
#define time cerr << "\n Completed in " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
const int mod = 1e9 + 7;
const int N = 30005;

/*
   Q: Maximum path sum from root to any leaf in a tree
     DP on trees
   */

// Post order traversal, ~ DFS
int dfs(int node, int parent, vector<int> &ans, vector<int> graph[N], vector<int> &values)
{
    if (node == parent)
        return 0;
    if (graph[node].size() == 0)
    {
        // its a leaf node
        return ans[node] = values[node];
    }
    int maximum = 0;
    for (auto x : graph[node])
    {
        if (x != parent)
        {
            int tmp = dfs(x, node, ans, graph, values);
            maximum = max(maximum, tmp);
        }
    }
    return ans[node] = values[node] + maximum;
}

int32_t main()
{
    int n, m, u, v;
    cin >> n >> m;
    // Since its a tree, m: number of edges: n - 1
    vector<int> graph[N];
    vector<int> values(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> values[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> ans(n, 0);

    dfs(0, -1, ans, graph, values);

    for (auto x : ans)
        cout << x << " ";

    time return 0;
}

/*
Input format:
n m
n: number of nodes in the tree
m: number of edges
Array of n elements, denoting the value of each node
m lines of u v integers, implying an edge from u to v
  Test case:
  14 13
  3 2 1 10 1 3 9 1 5 3 4 5 9 8
  0 1
  0 2
  0 3
  1 4
  1 5
  4 10
  4 11
  2 6
  6 12
  6 13
  3 7
  3 8
  3 9

  Output answer:
  22 8 19 15 6 3 18 1 5 3 4 5 9 8 
  */
