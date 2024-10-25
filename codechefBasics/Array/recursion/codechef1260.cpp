#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int N;
	    cin>>N;
	    
	    vector<int> arr(N);
	    for(int i=0;i<arr.size();i++){
	     
	     cin>>arr[i];
	    }
	    int count=0;
	    int total=0;
	   for(int i=0;i<arr.size();i++){
	       
	     total=total+arr[i]-1;
	     count++;
         }
      
	   
	      
	     cout<<total+count<<endl;
	    
	  }
	    
	    
	   
	    
	    
	    

	
	
	
	
	
}
