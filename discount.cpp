#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(360%n==0){cout<<"y ";}
        else{cout<<"n ";}
        
        int div=360/n;
        
        if((360/div)==n){cout<<"y ";}
        else{cout<<"n ";}
        
        if(n<27){cout<<"y ";}
        else{cout<<"n ";}
        
        cout<<endl;
    }
    
    
    
    
}