#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{

public:
  unordered_map<T ,list<T>> adj;

  void addEdge(T u,T v,bool direction){

   adj[u].push_back(v);
    if(direction==0){
  adj[v].push_back(u);
    }
  }


  void printadjencyList(){

    for(auto i:adj){

        cout<<i.first<<"->";
        for(auto j:i.second){

            cout<<j<<",";
        }

        cout<<endl;
    }
  }




};

int main(){

  int n;
  cout<<"Enter the no of nodes"<<endl;
  cin>>n;


   int m;
  cout<<"Enter the no of edges"<<endl;
  cin>>m;


  vector<int>adj[n+1];


    Graph <int> g;
for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;

g.addEdge(u,v,0);

}

g.printadjencyList();


 
 

 
 
 

  }











}


// #include <bits/stdc++.h> 

// void prepareAdj( unordered_map<int,set<int>>&adj, vector<pair<int,int>>&edges)
// {


//     for(int i=0;i<edges.size();i++){

//       int u=edges[i].first;
//       int v=edges[i].second;

//       adj[u].insert(v);
//       adj[v].insert(u);



//     }

// }


// void bfs(unordered_map<int,set<int>>&adj,unordered_map<int,bool>&visited,vector<int>&ans,int node)
// {

// queue<int> q;
// q.push(node);
// visited[node]=1;


// while(!q.empty()){

//     int front=q.front();

//     q.pop();

//     ans.push_back(front);

//     for(auto i:adj[front]){

//         if(!visited[i]){
//              q.push(i);
//             visited[i]=1;
//         }
//     }

// }


// }






// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     // Write your code here


//     unordered_map<int,set<int>>adj;
//      vector<int>ans;
//      unordered_map<int, bool> visited;

//      prepareAdj(adj,edges);


// for(int i=0;i<vertex;i++){


//     if(!visited[i]){


//         bfs(adj,visited,ans,i);
//     }
// }

// return ans;





// }