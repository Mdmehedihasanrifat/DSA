#include<bits/stdc++.h>

using namespace std;


int main(){


int arr[5]={1,3,5,2,7};



for(int i=1;i<5;i++){
for(int j=0;j<5-i;j++){

if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
}
}

}

for(int i=0;i<5;i++){

    cout<<" "<<arr[i]; 
}






}