#include <bits/stdc++.h>
using namespace std;


int main(){


int arr[]={2,4,5,3,1};
int size =sizeof(arr)/sizeof(int);

for(int i=0;i<size;i+=2){

if(i+1<size){

    swap(arr[i],arr[i+1]);
}

}





for(int i=0;i<size;i++){

    cout<<arr[i];
    
}





}