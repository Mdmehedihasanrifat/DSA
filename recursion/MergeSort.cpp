#include<bits/stdc++.h>
using namespace std;



void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1=(mid-s)+1;
    int len2=(e-mid);
   int arr1[len1];
   int arr2[len2];
   int k=s;
  for(int i=0;i<len1;i++){
    arr1[i]=arr[k++];
  }
  k=mid+1;
  for(int i=0;i<len2;i++){
    arr2[i]=arr[k++];
  }


int index1=0;
int index2=0;
int mainInd=s;

while(index1<len1 && index2<len2){

    if(arr1[index1]<arr2[index2]){

        arr[mainInd++]=arr1[index1++];
    }

    else{
        arr[mainInd++]=arr2[index2++];
    }
}

while (index1<len1)
{
 arr[mainInd++]=arr1[index1++];
}

while (index2<len2)
{
 arr[mainInd++]=arr2[index2++];}



}


void MergeSort(int *arr,int s,int e){

if(s>=e){return ;}
int mid=(s+e)/2;

MergeSort(arr,s,mid);
MergeSort(arr,mid+1,e);
merge(arr,s,e);



}

int main(){


int arr[5]={1,5,2,4,3};

MergeSort(arr,0,4);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}





}