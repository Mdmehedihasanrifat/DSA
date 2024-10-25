#include<bits/stdc++.h>

using namespace std;


int main(){


int arr[5]={1,3,5,2,7};



for(int i=1;i<5;i++){
int key=arr[i];
int hole=i;
while (hole>0 && arr[hole-1]>key){
   arr[hole]=arr[hole-1];
    hole=hole-1;
   arr[hole]=key;
    
}


}

for(int i=0;i<5;i++){

    cout<<" "<<arr[i]; 
}






}