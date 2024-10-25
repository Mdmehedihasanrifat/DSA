#include<bits/stdc++.h>
using namespace std;



int firstocc(int arr[],int size,int key){
 int s=0;
 int e=size-1;


 int mid=s+(e-s)/2;


int ans;
 while(s<=e){

    if(arr[mid]==key){ans=mid;e=mid-1;}
    else if(arr[mid]<key){s=mid+1;}
    else {e=mid-1;}


mid =s+(e-s)/2;
 }

return ans;

}

int lastocc(int arr[],int size,int key){
 int s=0;
 int e=size-1;


 int mid=s+(e-s)/2;


int ans;
 while(s<=e){

    if(arr[mid]==key){ans=mid;s=mid+1;}
    else if(arr[mid]<key){s=mid+1;}
    else {e=mid-1;}


mid =s+(e-s)/2;
 }

return ans;

}

int main(){

int arr[9]={1,2,2,2,2,2,2,3,5};

cout<<firstocc(arr,9,2)<<endl;

cout<<lastocc(arr,9,2)<<endl;
cout<<(lastocc(arr,9,2)-firstocc(arr,9,2))+1<<endl;




}