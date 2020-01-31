#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> v[],int a,int b)
{
  v[a].push_back(b);
//  v[b].push_back(a);
}
void dfs(int s, vector<int> v[],int visited[])
{
  visited[s]=1;
  cout<<s<<"-> ";
  for(auto x:v[s])
  {
    if(!visited[x])
    {
      dfs(x,v,visited);
    }
  }

}
void dfs_Start(int s, vector<int> v[])
{
  int visited[5]={0};
  dfs(s,v,visited);
}
void bfs(int s,vector<int> v[])
{
  int visited[5]={0};
//  for(int i=0;i<5;i++)
  list<int> queue;
  visited[s]=1;
  queue.push_back(s);
  while(!queue.empty())
  {
    s=queue.front();
    cout<<s<<" ";
    queue.pop_front();
    for(auto x:v[s])
    {
      if(!visited[x])
      {
        visited[x]=1;
        queue.push_back(x);
      }
    }
  }
}
void printGraph(vector<int> v[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"node"<<i<<"   "<<endl;
    for(auto x:v[i])
    cout<<"->"<<x;
    cout<<endl;
  }
}
int main()
{
  std::vector<int> v[5];
  addEdge(v,0, 1);
    addEdge(v,0, 2);
    addEdge(v,1, 3);
   //addEdge(v,2, 3);
    addEdge(v,1, 4);
    //addEdge(v,3, 3);
printGraph(v, 3);
dfs_Start(0,v);

}
