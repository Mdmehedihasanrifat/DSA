#include<bits/stdc++.h>
using namespace std;

int main(){


vector <int> arr={5,4,3,2,1};

int minindex;

for(int i=0;i<arr.size()-1;i++){
 minindex=i;

 for(int j=i+1;j<arr.size();j++){
    
    if(arr[minindex]>arr[j]){
        
        minindex=j;
        
    }
 }
 swap(arr[i],arr[minindex]);


}

for(int i=0;i<arr.size();i++){


    cout<<arr[i]<<endl;
}






}