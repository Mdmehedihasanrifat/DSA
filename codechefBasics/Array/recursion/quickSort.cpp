#include<bits/stdc++.h>
using namespace std;


int partition(int *arr,int s,int e){

int pivot =arr[s];


int cnt=0;
for(int i=s+1;i<e;i++){
    if(arr[i]<pivot){cnt++;}
}

int pivotIndex=s+cnt;
swap(arr[pivotIndex],arr[s]);




int i=s;
int j=e;


while(i<pivotIndex &&j>pivotIndex){

while(arr[i]<arr[pivotIndex]){i++;}
while(arr[j]>arr[pivotIndex]){j--;}


if(i<pivotIndex &&j>pivotIndex){
    swap(arr[i++],arr[j--]);
}
}
return pivotIndex;


}
void QuickSort(int *arr,int s,int e){



if(s>=e) return ;

int p =partition(arr,s,e);
QuickSort(arr,s,p);
QuickSort(arr,p+1,e);




}

int main(){

 int arr[6]={2,4,5,1,7,8};
    int n=6;

    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}