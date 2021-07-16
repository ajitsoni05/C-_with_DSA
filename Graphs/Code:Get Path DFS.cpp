#include <iostream>
#include<vector>
using namespace std;
vector<int> getPath(int**edges,int n,bool*visited,int v1,int v2)
{
     visited[v1]=true;
    vector<int> ans;
    if(v1==v2)
    {
        ans.push_back(v1);
        return ans;
    }
    for(int i=0;i<n;i++)
    {
        if(i==v1)
        {
            continue;
        }
        if(edges[v1][i]==1&&!visited[i])
        {
            ans=getPath(edges,n,visited,i,v2);
            if(ans.size()!=0)
            {
                ans.push_back(v1);
                return ans;
            }
        }
    }
    
}
int main() {
    // Write your code here
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
    bool*visited =new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
   vector<int> a= getPath(edges,n,visited,v1,v2);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    
}
