#include<bits/stdc++.h>


using namespace std;

int main(){

    int n,i;


    cin>>n>>i;

  int bit=0;
  int ans=0;
    while(i--){
     
        bit=n&1;
        cout<<bit<<endl;
        n=n>>1;
      
        }

        if(bit==1){
            cout<<"set";
        }
        else{cout<<"unset";}
}