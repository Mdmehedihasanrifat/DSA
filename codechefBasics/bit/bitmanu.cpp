#include <bits/stdc++.h>


using namespace std;



int getIthbit(int n,int i){

int mask=(1<<i);

return (n&mask)>0 ? 1:0;




}


void clearBit(int &n,int i){

int mask=~(1<<i);


n=(n&mask);
cout<<n<<endl;


}


int setBit(int &n, int i){


    int mask =1<<i;
     n=n|mask;;
    return n;
}

void update(int &n,int i,int v){

    clearBit(n,i);
    int mask=v<<i;
    n= n|mask;
}

int main(){

int n,i;

cin>> n>>i;

// cout<<setBit(n,i);
// cout<<getIthbit(n,i)<<endl;

//  clearBit(n,i)
update(n,i,0);
cout<<n;




}