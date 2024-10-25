#include<bits/stdc++.h>
using namespace std;

void printName(int i,int n){

if(i<0){return; }
cout<<i<<endl;
printName(i-1,n);

}


int main (){



    int n;
    cin>>n;

    printName(n-1,n);

}