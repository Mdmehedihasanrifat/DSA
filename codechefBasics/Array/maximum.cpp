#include <iostream>
using namespace std;




int main(){


    int n;

    cin>>n;

    while(n--){

   int w,W,x,X,M;
   cin>>w>>W>>x>>X>>M;

     int weight=W-w;
     int minR=x*M;
     int maxR=X*M;
 
     if(weight>=minR &&weight<=maxR){
        cout<<1<<endl;
     }
     else{cout<<0<<endl;}







    }
}