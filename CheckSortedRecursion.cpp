#include <iostream>
using namespace std;


bool IsSorted(int arr[],int size){

    if(size==0 || size ==1){return true;}
   
    if(arr[0]>arr[1]){return false;}

    else IsSorted(arr+1,size-1);





}

int main(){

    int arr[5]={1,3,5,7,9};

    cout<<IsSorted(arr, 5);
}