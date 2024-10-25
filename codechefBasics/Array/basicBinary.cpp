#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int t,int key){
int s=0;
int e=t-1;
int mid=s+(e-s)/2;

while(s<=e){


    if(key==arr[mid])return mid;

    else if(key>arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}



}
int main(){

int t;


cin>>t;
int arr[t];

for(int i=0;i<t;i++){

    cin>>arr[i];}


cout<<"Element at index:"<<binarySearch( arr,t,5)<<endl;
for(int i=0;i<t;i++){

    cout<<arr[i];}


}