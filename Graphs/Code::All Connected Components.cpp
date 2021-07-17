#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> BFS(int**edges,int n,int sv,bool*visited)
{
    vector<int> vect;
    vect.push_back(sv);
    visited[sv]=true;
    queue<int> pendingNodes;
    pendingNodes.push(sv);
    while(!pendingNodes.empty())
    {
        int curr=pendingNodes.front();
        pendingNodes.pop();
        for(int i=0;i<n;i++)
        {
            if(edges[curr][i]==1&&!visited[i])
            {
                visited[i]=true;
                pendingNodes.push(i);
                vect.push_back(i);
            }
        }
    }
    return vect;


}
int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    int**edges= new int*[n];
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
    bool*visited=new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            vector<int>vect= BFS(edges,n,i,visited);

            sort(vect.begin(),vect.end());

            for(int i=0;i<vect.size();i++)
            {
                cout<<vect[i]<<" ";
            }
            cout<<endl;

        }
    }


}
