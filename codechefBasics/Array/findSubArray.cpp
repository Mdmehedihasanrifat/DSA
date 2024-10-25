
#include <iostream>

using namespace std;


int largestSum(int arr[],int n){


int largestSum=0;
  int currentSum=0;
for(int i=0;i<n;i++){
    currentSum+=arr[i];
   if(currentSum<0){

    currentSum=0;
   }
  largestSum=max(currentSum,largestSum);
    
   
}

return largestSum;




}



int main(){

int arr[]={2,3,4,5,6};

int size=sizeof(arr)/sizeof(int);
cout<<largestSum(arr,size);




}