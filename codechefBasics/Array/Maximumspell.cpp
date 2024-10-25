#include <bits/stdc++.h>
using namespace std;


int main(){

int t;


cin>>t;

while (t--){
int n,k,z;

cin>>n>>k>>z;

if((n+k)>(n+z) &&(n+k)>(k+z)){cout<<n+k<<endl;}
if((n+k)<(n+z) &&(n+z)>(k+z) ){cout<<n+z<<endl;}
else{cout<<k+z<<endl;}

}

}