#include<bits/stdc++.h>
using namespace std;


int main (){


    long long int x,y,z,a,b;
    cin>>a>>b>>z;


    if(a%z==0){
        x=a/z;
    }
    else{
        x=(a/z)+1;
    }

    if(b%z==0){
        y=b/z;
    }
    else{
        y=(b/z)+1;
    }


    cout<<x*y<<endl;
}

