#include<bits/stdc++.h>
using namespace std;


int fibo(int n){

if(n<=1){
    return n;
}

return fibo(n-1)+fibo(n-2);

}

int fibomemo(int n,vector<int> &dp){
    if(n<=1){
    return n;
}

if(dp[n]!=-1){return dp[n];}

return dp[n]=fibo(n-1)+fibo(n-2);
}


int fibotabu(int n,vector<int> &dp){
   dp[0]=0;
   dp[1]=1;
   for(int i=2;i<n;i++){
    dp[i]=dp[i-1]+dp[i-2];
   }
   return dp[n];
}

int fibobest(int n){
      int prev2=0;
       int  prev=1;
        int curr;
   for(int i=2;i<=n;i++){
      curr=prev2+prev;
      prev2=prev;
      prev=curr;
   }
   return curr;
}


int main(){

    int n;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<fibo(n)<<endl;;
    cout<<fibomemo(n,dp);
    cout<<fibotabu(n,dp);
    cout<<fibobest(n);
}