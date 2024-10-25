#include <iostream>


using namespace std;

int sumOfN(int n){

    int sum=0;

    for(int i=1;i<=n;i++){

        sum+=i;
    }

    return sum;
}


int sumofNformula(int n){

    int sum =(n*(n+1))/2;

    return sum;
}

int main (){

int n;
cin>>n;

cout<<sumOfN(n);
cout<<"\n"<<sumofNformula(n);


}