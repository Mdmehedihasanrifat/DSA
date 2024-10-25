#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int n;
 cin>>n;

 while(n--){
 int k;
 cin>>k;
 int arr[k];
  int count=0;
 for(int i=0;i<k;i++){

     cin>>arr[i];
 }


 for(int i=0;i<k;i++){

     if(arr[i]>arr[i+1]){
         int temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
         count++;
     }
     
 }

 if(count>1){cout<<"NO"<<endl;}
 else{cout<<"YES"<<endl;}



 }


}