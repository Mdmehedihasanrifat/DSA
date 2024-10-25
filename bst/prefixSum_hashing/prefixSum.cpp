#include<bits/stdc++.h>
using namespace std;




const int N=1e5+10;
int pf[N];
int arr[N];
int main(){
int n;
cin>>n;


for(int i=1;i<=n;i++){
     
    cin>>arr[i];
    pf[i]=pf[i-1]+arr[i];
}

int q;
cin>>q;
while (q--)
{
    cout<<"Insert L And R"<<endl;
    int l,r;
    cin>>l>>r;
    cout<<pf[r]-pf[l-1];
}


}