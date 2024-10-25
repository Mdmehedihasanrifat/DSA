//
// Created by User on 1/16/2022.
//

#include <bits/stdc++.h>
using namespace std;



int main (){

    int n ;
    cin>>n;
    int max=-199999;
    int arr[n];


    for(int i=0;i<n;i++){


        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<max;




}
