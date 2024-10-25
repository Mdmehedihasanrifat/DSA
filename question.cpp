#include <bits/stdc++.h>
using  namespace std;


int main(){



    int n,i,flag=0;
    cout<<"enter Value of n\n";
    cin>>n;
    cout<<n<<endl;
    for(i=2;i< sqrt(n);i++){

        if(n%i==0){
            cout<<"Not Prime"<<endl;
            flag=1;
        }

    }
    if(flag==0){
        cout<<"\nprime";
    }


}