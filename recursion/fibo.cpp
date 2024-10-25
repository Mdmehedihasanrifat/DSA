#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int Arr[N];
int dp[N];



int solve(int n){

    if(n==0)return 1;
    if(n==1)return 1;
  return solve(n-1)+solve(n-2);
  

}
int dphelper(int n){
       if(n==0) return 1;
    if(n==1) return 1;
    if(dp[n]!=-1){return dp[n];}

    return dp[n]=dphelper(n-1)+dphelper(n-2);
}



int main (){



    int n;
    cin>>n;
    Arr[0]=1;
    Arr[1]=1;

    for(int i=2;i<=n;i++){
        Arr[i]=Arr[i-1]+Arr[i-2];
        
    }
 
    memset(dp,-1,sizeof(dp));
    
   
    // int prev1=1;
    // int prev2=0;
    // if(n==0){return prev2;}

    // for(int i=2;i<=n;i++){

    // int curr=prev1+prev2;
    // prev2=prev1;
    // prev1=curr;

    // }

    // cout<<prev1<<endl;

    cout<<solve(n)<<endl;

    cout<<Arr[n]<<endl;
    cout<<dphelper(n)<<endl;


       



}