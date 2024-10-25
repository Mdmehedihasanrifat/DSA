#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int slow=0;
         int fast=0;
 cout<<slow<<" "<<fast<<endl;
        
        
        do{
          
            slow=nums[slow];
            fast=nums[nums[fast]];
            cout<<slow<<" "<<fast<<endl;
            
        }
        while(slow!=fast);
            
            fast=nums[0];
        
        while(slow!=fast){
             cout<<slow<<" "<<fast<<endl;
            slow=nums[slow];
            fast=nums[fast];
        }
     return slow;
    }


int main(){
 vector<int> vect{1,2,3,4,4};
cout<<findDuplicate(vect)<<endl;}

// for(int i=0;i<7;i++){
//   hsh[arr[i]]++;

// }
// for(int i=0;i<7;i++){
//  if(hsh[i]>1){
//     cout<<i<<endl;
//  }

// }
// for(;i<6;i++){
   

//  if(arr[i-1]==arr[i] || arr[i+1]==arr[i]){
//    break;
//  }

// }

//  cout<<arr[i]<<endl;
// //o(nlogn)
