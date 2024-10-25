

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int Number,Candies;
	    
	    
	    
	    cin>>Number>>Candies;
	    
	    if(Candies>Number){cout<<0<<endl;}
	    else{
	    int rem=Number-Candies;
        cout<<rem<<endl;
	    float chocneed=ceil(rem/4.0);

	    
	    cout<<chocneed<<endl;
	    }
	    
	   
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}
