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

/*  DP on trees: Re rooting dp is the technique

     Q: Return an array of size of nodes, with each entry being the 
     maximum height of the tree if rooted at that node.

     Other similar problems and concepts reference:
     https://youtu.be/l6aA9a_x3gE
  */

//this DFS ~ post order traversal
void dfs1(int node, int parent, vector<int> graph[N], vector<int> &f)
{
    if (node == parent)
        return;
    vector<int> children;
    for (int child : graph[node])
    {
        if (child == parent)
            continue;
        dfs1(child, node, graph, f);
        f[node] = max(f[node], 1 + f[child]);
    }
}

// Second dfs ~ Pre order traversal
void dfs2(int node, int parent, vector<int> graph[N], vector<int> &f, vector<int> &g)
{
    int mx1 = -1, mx2 = -1;

    // traverse in the subtress of u
    for (int child : graph[node])
    {
        if (child == parent)
            continue;

        // compare and store the longest
        // and second longest
        if (f[child] >= mx1)
        {
            mx2 = mx1;
            mx1 = f[child];
        }

        else if (f[child] > mx2)
            mx2 = f[child];
    }

    // traverse in the subtree of u
    for (int child : graph[node])
    {
        if (child == parent)
            continue;

        int longest = mx1;

        // if longest branch has the node, then
        // consider the second longest branch
        if (mx1 == f[child])
            longest = mx2;

        // recursively calculate out[i]
        g[child] = 1 + max(g[node], 1 + longest);

        // dfs function call
        dfs2(child, node, graph, f, g);
    }
}

int32_t main()
{
    int n, m, u, v, final_answer = 0;
    cin >> n >> m;
    vector<int> graph[N];

    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> ans(n + 1, 0);
    vector<int> f(n + 1, 0); // Stores max possible height when traversing downwards to children
    vector<int> g(n + 1, 0); // Stores max possible height through this node, upwards while towards parents

    dfs1(1, -1, graph, f);
    dfs2(1, -1, graph, f, g);

    for (int i = 1; i <= n; ++i)
    {
        ans[i] = max(f[i], g[i]);
        cout << ans[i] << " ";
    }

    time return 0;
}