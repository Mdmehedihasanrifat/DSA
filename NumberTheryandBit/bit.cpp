#include<bits/stdc++.h>
using namespace std;

int checkSetBit(int n,int i){
    if(n&&(1<<i)!=0){return 1;}
    else{return 0;}
}
int main(){

    int n=9;
    int i=3;
    if(checkSetBit(n,i)){cout<<"set"<<endl;}
    else{cout<<"notSet"<<endl;}


}