//
// Created by User on 11/29/2021.
//

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;


    cout << "enter Value of n\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

int counter=0;

    while (counter<n){

        for(int i=0;i<n-counter;i++){

            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i+1];

                arr[i+1]=arr[i];
                arr[i]=temp;


            }
        }
        counter++;
    }
    for (int i = 0; i<n; i++) {
        cout<< arr[i];
    }



}


