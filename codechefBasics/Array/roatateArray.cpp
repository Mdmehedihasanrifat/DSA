#include<bits/stdc++.h>
using namespace std;

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    
    
    
    int s=0;
    
    int e=n-1;
    
    int ans=-1;
    
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        
        
        if(arr[mid]==k){ans=mid; return ans;}
         else if(arr[mid]>=arr[s]){
            if(arr[s]<=k && arr[mid]>=k){
                e=mid-1;
            }
            else{s=mid+1;}
                
             }
         else {
             
             if(arr[mid]<=k && arr[e]>=k){
                 
                 s=mid+1;
             }
             else{
                 e=mid-1;
             }
         }
        
 }
 return -1;


   
}

int main(){


    vector <int> arr={8,9, 2, 4, 5 ,6 ,7};+
    cout<<1<<endl;
    cout<<findPosition(arr,7,5);
}