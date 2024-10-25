#include<bits/stdc++.h>
using namespace std;

int main(){
int n;cin>>n;
    long long f[n+1];
    f[0]=1;
    f[1]=0;
    for(long long i=2;i<=n;i++){
        f[i]=2*f[i-2];

    }
    cout<<f[n]<<endl;
}