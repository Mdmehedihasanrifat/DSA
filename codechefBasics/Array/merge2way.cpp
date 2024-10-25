#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int m,int arr1[],int n,int arr2[]){
int i =0;
int j=0;
int k=0;


while (i<m && j<n)
{
    if(arr[i]>arr1[j]){
        arr2[k]=arr1[j];
        cout<<k<<"::"<<arr1[j]<<endl;
        k++;
        j++;
    }
    else{

        cout<<k<<"::"<<arr[i]<<endl;
        arr2[k]=arr[i];
        k++;
        i++;
    }


    /* code */
}

while(i<m){
arr2[k]=arr[i];
cout<<k<<"::"<<arr[i];
k++;
i++;


}

while(j<n){
    cout<<k<<"::"<<arr1[j]<<endl;
arr2[k]=arr1[j];
k++;
j++;


}





}


int main(){

int arr[5]={2,3,5,6,7};
int arr1[3]={4,8,9};

int arr2[8]={0};

merge(arr,5,arr1,3,arr2);
for(int i=0;i<8;i++){

    cout<<arr2[i]<<endl;
}


}