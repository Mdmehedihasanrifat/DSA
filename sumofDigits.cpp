#include<bits/stdc++.h>
using namespace std;


int main (){


    int n;
    cin>>n;
while (n--){
   int input;
   cin>>input;
   int sum=0;
while(input>0){

       int lastDigit = input % 10;
       sum=sum+lastDigit;
        input=input/10;
   }
cout<<sum<<endl;

   
}

}