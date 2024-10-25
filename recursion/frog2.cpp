#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int h[N];
int dp[N];


int solve(int n,int k){
int cost=INT_MAX;


if(n==0){return 0;}


if(dp[n]!=-1){return dp[n];}

for(int j=1;j<=k;j++){
    if(n-j>=0)
cost=min(cost,solve(n-j,k)+abs(h[n]-h[n-j]));
}


return dp[n]=cost;




}
int main(){
int n,k;
cin>>n>>k;
memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++){
    cin>>h[i];
}

cout<<solve(n-1,k);





}