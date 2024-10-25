#include<bits/stdc++.h>
using namespace std;



int sumofN(int n){

    if(n==0)return 0;
    if(n==1)return 1;
    int sum=0;
    sum=n+sumofN(n-1);

    return sum;


}

int main(){


    int n;

    cin>>n;

    cout<<sumofN(n);






}