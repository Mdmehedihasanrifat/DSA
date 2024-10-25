#include<bits/stdc++.h>


using namespace std;


void clearBitRange(int &n,int i,int j){

int a=-1<<(j+1);
int b=(1<<i)-1;

int mask=a|b;


n=n&mask;





}


void replaceBits(int &n,int i,int j,int m){


    clearBitRange(n,i,j);

    int mask =m<<i;

    n=n|mask;


}



int main (){


int n,i,j;
cin>>n>>i>>j;



replaceBits(n,i,j,2);

cout<<n;




}