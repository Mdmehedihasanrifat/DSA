#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;

vector<int> G[N];
bool Visited[N]={false};


bool dfs(int vertex,int parent){

     Visited[vertex]=true;
     bool isLoopExits=false;
    for(int child:G[vertex]){
       
           if(Visited[child] && child!=parent)continue;
           if(Visited[child]){return true;}

              isLoopExits|= dfs(child,vertex);
      

    }

    return isLoopExits;
}
int main(){



    int Vetices,Edges;
    cin>>Vetices>>Edges;

    for(int i=0;i<Edges;i++){
         int v,u;
        cin>>v>>u;
        G[v].push_back(u);
        G[u].push_back(v);
    }

    for(int i=1;i<=Vetices;i++){

        if(Visited[i]) continue;
       cout<<dfs(i,0);
    }



}