#include <iostream>

using namespace std;



int main(){

    
int n;
cin>>n;

int arr[n];
int largest=INT32_MIN;

for(int i=0;i<n;i++){

    cin>>arr[i];
    if(arr[i]>largest){

        largest=arr[i];
    }


}
cout<<"Largest is: "<<largest;


}