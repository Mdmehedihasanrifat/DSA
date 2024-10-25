//
// Created by User on 1/31/2022.
//

#include <iostream>
using namespace std;

int unique(int arr[] ,int size){
    int xorSum=0;
    for(int i =0;i<size;i++){


        xorSum=xorSum^arr[i];

    }

    return xorSum;



}
int main (){
    int arr[]={2,4,5,2,4};

    cout<<unique(arr,5);




}