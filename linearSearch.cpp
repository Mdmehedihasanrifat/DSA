#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        int sum=(n*(n+1))/2;
      vector<int>arr1;
     vector<int>arr2;
        if(sum%2==1){
            cout<<"NO"<<endl;
            
        }
        else{
            
        //     for(int i=1;i<=n/4;i++) arr1.push_back(i);
        // for(int i=(n/4 + 1);i<=3*(n/4);i++) arr2.push_back(i);
        // for(int i=3*(n/4) + 1;i<=n;i++) arr1.push_back(i);
        
        for(int i=1;i<n;i++){
            if(i%2==1) {arr1.push_back(i);
              arr1.push_back(n);
                n--;
            }
            else{
               
                arr2.push_back(i);
                arr2.push_back(n);
              n--;
            }
        }
        
            cout<<"YES"<<endl;
            
            
       
                      sort(arr1.begin(),arr1.end());
              sort(arr2.begin(),arr2.end());
            
         for(int  i=0;i<arr1.size();i++){cout<<arr1[i]<<" ";}
         cout<<endl; 
        for(int  i=0;i<arr2.size();i++){cout<<arr2[i]<<" ";}
         
        }
            
        }
        
        
    
    
    
    
}