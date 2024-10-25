#include<bits/stdc++.h>
using namespace std;


int powerBit(int base,int power){
     int ans=1;
    while(power>0){
        if(power%2==1){
        ans=ans*base;
        }
    power=power>>1;
    
    base=base*base;

    }
    return ans;
}
int main(){
    int base,power;
    cin>>base>>power;

    cout<<powerBit(base,power);
  

    


}