#include<bits/stdc++.h>

using namespace std;


void fillArray(int *arr,int i,int n,int val){

if(i==n){
    
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    
    return ;}

arr[i]=val;

fillArray(arr,i+1,n,val+1);

arr[i]=-1*arr[i];

}

int main(){


int arr[5]={0};
fillArray(arr,0,5,1);
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";}



}

