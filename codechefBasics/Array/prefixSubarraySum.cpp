#include <iostream>

using namespace std;


int largestSum(int arr[],int n){


int largestSum=0;

int prefixSum[100]={0};


prefixSum[0]=arr[0];

for(int i=1;i<n;i++){

prefixSum[i]=prefixSum[i-1]+arr[i];

}




for(int i=0;i<n;i++){

    for (int j=i;j<n;j++){
  int subarraySum=0;
           subarraySum= i>0?prefixSum[j]-prefixSum[i-1]:prefixSum[j];



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