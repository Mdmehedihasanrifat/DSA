#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){


    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int mainI=s;

for(int i=0;i<len1;i++){
    first[i]=arr[mainI++];
}

mainI=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[mainI++];
}

int index1=0;
int index2=0;
mainI=s;


while (index1<len1 &&index2<len2){

if(first[index1]<second[index2]){arr[mainI++]=first[index1++];}
else {arr[mainI++]=second[index2++];}

}



while(index1<len1){
    arr[mainI++]=first[index1++];}
while(index2<len2){
arr[mainI++]=second[index2++];}



}

void mergeSort(int *arr,int s,int e){

int mid=(s+e)/2;

if(s>=e) return ;

mergeSort(arr,s,mid);
mergeSort(arr,mid+1,e);
merge(arr,s,e);



}


int main(){



    int arr[6]={2,4,5,1,7,8};
    int n=6;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}