#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x)  int x;cin >> x;while (x--)
#define tk(x) int x;cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" ";_print(x);cerr<<endl;
#else
#define debug(x)
#endif
template <class T> void _print(T t){cerr<<t;}
vector<int>v[100003];
queue<int>que;
vector<int>dis;
vector<int>parent;
int c=0;
void bfs(int i,vector<bool>& vis,int n){
    vis[i]=true;
    for(int j:v[i]){
        if(vis[j]==false && j!=n){
            dis[j]=dis[i]+1;
            vis[j]=true;
            parent[j]=i;
           
            que.push(j);
        }
        else if(j==n){
            dis[j]=dis[i]+1;
            parent[j]=i;
            
            c=1;
            return;
        }
    }
}

int32_t main(){
fast


#ifndef ONLINE_JUDGE


    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);


#endif


int t=1;
    int n,m;
    cin>>n>>m;
    vector<bool>vis(n+1,false);
    dis.resize(n+1,0);
    parent.resize(n+1,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    que.push(1);
    while(!que.empty()){
        int x=que.front();
        que.pop();
        bfs(x,vis,n);
        if(c==1) break;
    }
    int distance=dis[n];
    int z=distance;
    vector<int>num;
    num.pb(n);
    while(distance--){
         n=parent[n];
         num.pb(n);
    }
    if(z==0){
        cout<<"IMPOSSIBLE"<<"\n";
    }
    else{
        cout<<z+1<<"\n";
        for(int i=num.size()-1;i>=0;i--){
            cout<<num[i]<<" ";
        }
    }

return 0;
}
