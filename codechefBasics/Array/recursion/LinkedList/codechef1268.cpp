#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	     
	    long long N;
	    cin>>N;
	    
	    vector<long long> arr(N) ;
	  for(int i=0;i<N;i++){
	     
	     cin>>arr[i];
	    }
long long maxi=0;
long long mini=INT_MAX;
	   for(int i=0;i<arr.size()-1;i++){
	      maxi=max(maxi,arr[i]);
	      mini=min(mini,arr[i]);
	   }
	   

	   cout<<maxi-mini<<endl;
	      
	   
	    
	  }
	    
	    
	   
	    
	    
	    

	
	
	
	
	
}
