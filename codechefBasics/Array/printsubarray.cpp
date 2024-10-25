#include<iostream>

using namespace std;


void printsubarray(int arr[],int n){

  for(int i=0;i<n;i++){
  
   for(int j=i;j<n;j++){
   for (int k=i;k<=j;k++){

    cout<<arr[k]<<",";
   }

 cout<<endl;
   }


  }
  


}
int main (){


int arr[]={4,5,6,7,8,9,1};



int size=sizeof(arr)/sizeof(int);

printsubarray(arr,size);




}