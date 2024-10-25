#include<bits/stdc++.h>
using namespace std;

int main(){


      int sum=0;
        int total=1;
        int n=234;
        while (n>0){
            int lastDigit=n%10;
            n/=10;
            sum+=lastDigit;
            total*=lastDigit;
            
            
            
        }
        cout<<total<<sum;
        cout<<(total-sum);
}