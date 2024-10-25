//
// Created by User on 1/25/2022.
//

#include "bits/stdc++.h"
using namespace std;
int main(){


    int n;
    cin>>n;

    char arr[n+1];

    cin>>arr;

    bool flag=1;


    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            flag=0;

        }
    }


if(flag==true){
    cout<<"palindrome";
}
else{
    cout<<"not palindrome";
}


}