#include<iostream>

using namespace std;


int binary(int &n){

int ans=0;
int p=1;

while(n>0){

    int lastBit=n&1;
    ans+=p*lastBit;
    p=p*10;
    n=n>>1;



}
return ans;

}


int binTodeci(int &n){
 int ans=0;
 int p=1;
 
 while (n>0){
  int rem=n%10;

  ans+=p*rem;
  p=p*2;

  n=n/10;






 }

return ans;

}


int main(){

int n;
cin>>n;
// cout<<binary(n);
cout<<binTodeci(n);

}