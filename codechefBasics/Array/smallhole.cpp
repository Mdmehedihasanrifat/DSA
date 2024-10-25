#include <bits/stdc++.h>
using namespace std;


int main(){

int t;


cin>>t;

while (t--){
int n,k;

cin>>n>>k;
if(k>n){
    cout<<n<<endl;
}
else{
while(n>k){
    n=n-k;
}

cout<<n<<endl;
}
}

}