#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

    int x;
    long long int max=0;

    cout<<"enter Value of n\n";
    cin>>x;
  
    bool isNegative=false;

    if(x<0){

        isNegative=true;
         x *=-1;
         cout<<x<<endl;
    }
        
        
        int reverse=0;

    
      cout<<isNegative<<endl;
        while (x!=0){
            
            int lastDigit=x%10;
            reverse=reverse*10+lastDigit;
            x=x/10;
            
            
        }
        
        isNegative? cout<< -reverse:cout<<reverse ;

}