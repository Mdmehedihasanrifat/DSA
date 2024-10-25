//
// Created by User on 1/16/2022.
//

#include "bits/stdc++.h"
using namespace std;



int main (){


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

//     int sum=0;


//     for(int i=0;i<n;i++){


//         for(int j=i;j<n;j++){

//             sum+=arr[j];

//         }

//     }

//    cout<<sum<<endl;



   //maxium contiguous subarray


   int pd= arr[1]-arr[0];
   int j=2;
   int current=2;
   int ans=2;


   while (j<n){


        if(pd==arr[j]-arr[j-1]){
        current++;
        

        }
        else {
            
            pd=arr[j]-arr[j-1];
            current=2;


        }

        ans=max(ans,current);
      

        j++;


   }

   cout<<ans;





}