#include <bits/stdc++.h>
using namespace std;


int main(){

int t;


cin>>t;

while (t--){
int u,v,a,s,speed;

cin>>u>>v>>a>>s;

v=pow(v,2);

u=pow(u,2);
speed=u-2*(a)*s;
if(v>=speed){
    cout<<"yes";
}
else{cout<<"No";}

}

}