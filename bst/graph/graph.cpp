#include<bits/stdc++.h>
using namespace std;



class graph{




    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v,bool dir){

        adj[u].push_back(v);
        if(dir==0){
            adj[v].push_back(u);
        }
    }

    void print(){

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


graph g ;


int n;
cout<<"number of nodes";
cin>>n;
int m;
cout<<"no of edges";
cin>>m;

for(int i=0;i<m;i++){
int u,v;
cin>>u>>v;


g.addEdge(u,v,0);


}

g.print();

}