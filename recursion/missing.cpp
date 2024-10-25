#include<bits/stdc++.h>
using namespace std;

int main(){



    long long int n;
    cin>>n;
    long long int arr[n];
   long long sum=(n*(n+1))/2;

   for(long long int i=0;i<n-1;i++){
    cin>>arr[i];
    sum-=arr[i];
   }
   cout<<sum<<endl;


}