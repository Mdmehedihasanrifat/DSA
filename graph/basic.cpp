#include<bits/stdc++.h>
using namespace std;


void  solve(){

    int remain=0;
    int n;
    cin>>n;
    int posSum=0;
    int negSum=0;
    vector<int>arr(n);

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        if(arr[i]>0){
            posSum+=arr[i];
        }
        else{
            negSum+=arr[i];
        }
    }

    cout<<abs(negSum)-posSum<<endl;
    return ;
}

int main(){

    int t;

    cin>>t;
    while(t--){
       solve();
    }
}