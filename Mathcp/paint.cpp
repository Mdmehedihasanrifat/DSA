#include<bits/stdc++.h>
using namespace std;
void solve(){
    
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            
            cin>>arr[i];
        }
        unordered_map<int,int>mp;
        
        bool yes=true;
        
        
        for(int i=0;i<n;i++){
            
            mp[arr[i]]++;
            
            if(mp.size()>2){
                yes=false;
                break;
            }
        }
            
            if(mp.size()==2){
                
                int f1=begin(mp)->second;
                
                if(f1!=(n/2) && f1!=(n+1)/2){
                    yes=false;
                }
            }
    
     
            if(yes)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    
}
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        solve();
        
    }
    
    
}