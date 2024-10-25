#include<bits/stdc++.h>
using namespace std;


int main(){
int num=3;
for(int i=10;i>=0;i--){
    cout<<((num>>i)&1)<<"  ";

    
}
cout<<endl;
cout<<(num>>1)<<endl;
}