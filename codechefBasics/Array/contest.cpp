

#include <bits/stdc++.h>
using namespace std;


int main(){

int count=0;

    int n,m,k;

cin>>n>>m>>k;


int arr[k+1];

for(int i=0;i<n;i++){
    for(int j=0;j<k+1;j++){
        
        cin>>arr[j];
    }
    
}


for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<k;j++){
        sum+=arr[j];

        
    }
 
    if(sum>=m && arr[k]>=10){  count++;}
    
    
}

cout<<count<<endl;

}

