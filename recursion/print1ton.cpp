#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int flag=0;
	    int n;
	    cin>>n;
	    vector<int>arr;
	    for(int k=0;k<n;k++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    int i=0,j=n-1;
	    while(j>=i){
	        if(arr[i]!=arr[j]){
	            flag=1;
	            break;
	            
	        }
	        if(arr[i+1]>=arr[i]+2||arr[j-1]>=arr[j]+2){
	            flag=1;
	            break;
	        }
	        if(arr[i+1]<arr[i]&&i<j||arr[j-1]<arr[j]&&i<j){
	            flag=1;
	            break;
	        }
	        if(arr[0]!=1){
	            flag=1;
	            break;
	        }
	        if(arr[i]>7)
	        flag=1;
	        j--;
	        i++;
	    }
	    if(arr[i-1]!=7)
	    flag=1;
	    if(flag==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
