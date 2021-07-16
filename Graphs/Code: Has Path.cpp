#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void BFS(int**edges,int n,int sv,bool*visited)
{
  
    visited[sv]=true;
    queue<int> pendingNodes;
    pendingNodes.push(sv);
    while(!pendingNodes.empty())
    {
        int currVertex=pendingNodes.front();
        pendingNodes.pop();
        for(int i=0;i<n;i++)
        {
            if(edges[currVertex][i]==1&&!visited[i])
            {
                pendingNodes.push(i);
                visited[i]=true;
                
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int**edges=new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    int v1,v2;
    cin>>v1>>v2;
      bool*visited=new bool [n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    BFS(edges,n,v1,visited);
    if(visited[v2])
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}
