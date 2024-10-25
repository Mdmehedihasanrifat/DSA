#include <iostream>

using namespace std;


int largestSum(int arr[],int n){


int largestSum=0;

for(int i=0;i<n;i++){

    for (int j=i;j<n;j++){
  int subarraySum=0;

     for(int k=i;k<= j;k++){
       cout<<arr[k]<<",";

      subarraySum=subarraySum+arr[k];


     }
     cout<<endl;

  largestSum=max(largestSum,subarraySum);
     }

   
}

return largestSum;




}



int main(){

int arr[]={2,3,4,5,6};

int size=sizeof(arr)/sizeof(int);
cout<<largestSum(arr,size);




}