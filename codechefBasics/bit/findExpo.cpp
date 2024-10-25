#include <iostream>
using namespace std;
int expo(int a,int n){

int ans=1;
while(n>0)
{
int lastBit=n&1;
if(lastBit){

    ans=ans*a;
}
a=a*a;
n=n>>1;

}

return ans;

}


int main(){


cout<<expo(3,5);



}