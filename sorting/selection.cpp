#include<bits/stdc++.h>

using namespace std;


int main(){


int arr[5]={1,3,5,2,7};



for(int i=0;i<5;i++){
    int minIndex=i;
        for(int j=i;j<5;j++){

        if(arr[i]>arr[j]){
            minIndex=j;
        }


}
swap(arr[i],arr[minIndex]);

}

for(int i=0;i<5;i++){

    cout<<" "<<arr[i]; 
}






}