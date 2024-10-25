#include <bits/stdc++.h>
using namespace std;


int firstOccurance(int *arr,int n,int k){


    if(n==0){return -1;}
     
     if(arr[0]==k){return 0;}
     
     int subindez=firstOccurance(arr+1,n-1,k);

     if(subindez!=-1){
        subindez=subindez+1;
        return subindez;
     }




}

int main(){

int arr[5]={2,3,5,7,8};


cout<<firstOccurance(arr,5,5);



}