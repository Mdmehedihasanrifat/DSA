#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[],int size){


if(size==0 || size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}

bool remain=isSorted(arr+1,size-1);

return remain;


}
int main(){


    int arr[4]={1,3,5,6};


cout<<isSorted(arr,4);
}