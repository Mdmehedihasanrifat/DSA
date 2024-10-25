//
// Created by User on 11/30/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin>>n;


    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    //3 2 1 4
    //2 1 3 4



    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
      for( j=i-1;j>=0&&arr[j]>current;j--){

         arr[j+1]=arr[j];

      }
//        cout<<j<<endl;
        arr[j+1]=current;
//      cout<<""<<arr[j+1]<<""<<endl;
    }



    for(int i=0;i<n;i++){

        cout<<arr[i];
    }


}