#include<bits/stdc++.h>
#define coutA(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define nl cout<<"\n";
using namespace std;

void add(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void addD(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}
void print(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<" : ";
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

//dfs

//bool vis[10000]={false};
//void dfs(vector<int> adj[],vector<int> &ans,int i)
//{
//    if(vis[i]==false)
//    {
//        vis[i]=true;
//        ans.push_back(i);
//        for(auto it:adj[i])
//        {
//            if(vis[it]==false)
//            {
//                dfs(adj,ans,it);
//            }
//        }
//    }
//}
//int main()
//{
//    int v=5;
//    vector<int> adj[v];
//    add(adj,0,1);
//    add(adj,0,4);
//    add(adj,1,2);
//    add(adj,1,3);
//    add(adj,1,4);
//    add(adj,2,3);
//    add(adj,3,4);
//    print(adj,v);
//    vector<int> ans;
//    dfs(adj,ans,0);
//    coutA(ans,ans.size());
//}


//bfs

//void bfs(vector<int> adj[],vector<int> &ans,int v)
//{
//    print(adj,v);
//    bool vis[v+1]={false};
//    queue<int> q;
//    int s=0;
//    vis[s]=true;
//    q.push(s);
//    while(q.empty()==false)
//    {
//        int t=q.front();
//        q.pop();
//        ans.push_back(t);
//        for(int g:adj[t])
//        {
//            if(vis[g]==false)
//            {
//                vis[g]=true;
//                q.push(g);
//            }
//        }
//    }
//}
//int main()
//{
//    int v=5;
//    vector<int> adj[v],ans;
//    addD(adj,0,1);
//    addD(adj,0,2);
//    addD(adj,0,3);
//    addD(adj,2,4);
//    bfs(adj,ans,v);
//    coutA(ans,ans.size());
//}

//Detect cycle in an undirected graph

//bool cycle(vector<int> adj[],int s,vector<bool> &visited,int parent)
//{
//    visited[s]=true;
//    for(auto it:adj[s])
//    {
//        if(!visited[it])
//        {
//            if(cycle(adj,it,visited,s))
//            {
//                return true;
//            }
//        }
//        else if(it!=parent)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//bool isCycle(int V, vector<int> adj[])
//{
//    vector<bool> visited(V,false);
//    for(int i=0;i<V;i++)
//    {
//        if(!visited[i])
//        {
//            if(cycle(adj,i,visited,-1))
//            {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int main()
//{
//    int v=5;
//    vector<int> adj[v];
//    addD(adj,0,1);
//    addD(adj,1,4);
//    addD(adj,1,2);
//    addD(adj,2,3);
//    addD(adj,4,3);
//    addD(adj,1,0);
//    addD(adj,4,1);
//    addD(adj,2,1);
//    addD(adj,3,2);
//    addD(adj,3,4);
//    (solve(adj,v))?(cout<<"Contains cycle"):(cout<<"Doesn't contain cycle");
//}

// Topological sort

//void topo(vector<int> adj[],vector<bool> &vis,int i,stack<int> &st)
//{
//    vis[i]=true;
//
//    for(auto it:adj[i])
//    {
//        if(!vis[it])
//        {
//            topo(adj,vis,it,st);
//        }
//    }
//    st.push(i);
//}
//vector<int> topoSort(int V, vector<int> adj[])
//{
//    vector<bool> visited(V,false);
//    vector<int> ans;
//    stack<int> st;
//    for(int i=0;i<V;i++)
//    {
//        if(!visited[i])
//        {
//            topo(adj,visited,i,st);
//        }
//    }
//    while(!st.empty())
//    {
//        ans.push_back(st.top());
//        st.pop();
//    }
//   // for(auto it:ans)
//   // {
//   //     cout<<it<<" ";
//   // }
//   // cout<<endl;
//    return ans;
//}

// Implementing Dijkstra Algorithm

//vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//{
//    queue<int> q;
//    q.push(S);
//    vector<int> dist(V,INT_MAX);
//    dist[S]=0;
//    while(!q.empty())
//    {
//        int prev=q.front();
//        q.pop();
//        for(auto it:adj[prev])
//        {
//            int node=it[0];
//            int d=it[1];
//            if(dist[node]>dist[prev]+d)
//            {
//                dist[node]=dist[prev]+d;
//                q.push(node);
//            }
//        }
//
//    }
//    return dist;
//}

