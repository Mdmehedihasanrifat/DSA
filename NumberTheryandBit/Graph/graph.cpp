#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
bool visited[N];

bool dfs(int vertex,int parent){
    visited[vertex]=true;

    for(auto child:Graph[vertex]){
        if(visited[child] && child==parent)continue;
        if(visited[child]) return true;
       
        dfs(child,vertex);
    }


    return false;


}
int main(){

    int n,m;cin>>n>>m;
 

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);

    }
int cnt=0;

  for(int i=1;i<=n;i++)
  {
    if(visited[i]) continue;
    if(dfs(i,0)){
        cnt=1;
        break;;
    }
 cout<<cnt<<endl;
    
  }
  cout<<cnt<<endl;

}
