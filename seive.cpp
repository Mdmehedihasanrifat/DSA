#include<bits/stdc++.h>

using namespace std;


void primeseive(int n){
   int isPrime[100]={0};

    for(int i=2;i<=n;i++){
      if(isPrime[i]==0){
       for(int j=i*i;j<=n;j+=i){

            isPrime[j]=1;
        }
       }
    }



    for(int i=2;i<=n;i++){

        
        if(isPrime[i]==0){cout<<i<<" ";}
    }

}


int main (){



    int n;
    cin>>n;

    primeseive(n);
}