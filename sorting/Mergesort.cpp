#include <bits/stdc++.h>
using namespace std;
int upper_bound(int arr[],int n,int element){

    int s=0;
    int e=n-1;

    while(s<e){
      int mid=s+(e-s)/2;

     if(arr[mid]>element){e=mid;}
     else{
       s=mid+1;
     }
     }

     if(arr[s]>element){return arr[s];}
     if(arr[e]>element){return arr[e];}
     
        return -1;


}


int lower_bound(int arr[],int n,int element){

    int s=0;
    int e=n-1;

    while(s<e){
      int mid=s+(e-s)/2;

     if(arr[mid]>=element){e=mid;}
     else{
       s=mid+1;
     }
     }

     if(arr[s]>=element){return arr[s];}

     if(arr[e]>=element){return arr[e];}
     
        return -1;


}


int main(){


    int arr[6]={2,3,4,5,6,7};

cout<<upper_bound(arr,6,4);
     cout<<endl;
cout<<lower_bound(arr,6,4);

}