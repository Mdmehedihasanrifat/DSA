#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int h[N];
int dp[N];


int solve(int n){
int cost=INT_MAX;


if(n==0){return 0;}


if(dp[n]!=-1){return dp[n];}
cost=min(cost,solve(n-1)+abs(h[n]-h[n-1]));
if(n>1){
cost=min(cost,solve(n-2)+abs(h[n]-h[n-2]));
}


return dp[n]=cost;




}
int main(){
int n;
cin>>n;
memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++){
    cin>>h[i];
}

cout<<solve(n-1);





}