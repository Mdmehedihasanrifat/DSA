#include <bits/stdc++.h>
using namespace std;

int main (){


    int year;
    cin>>year;

   while (true){
        year++;
         int first=year/1000;
         int second=(year/100)%10;
         int third=(year/10)%10;
         int last=year%10;
     if(first!=second &&first!=third &&first!=last&&second!=third&&second!=last&&third!=last){

                    cout<<year<<endl;
                    break;
     }

         
         }
}