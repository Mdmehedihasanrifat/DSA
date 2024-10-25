#include <bits/stdc++.h>

using namespace std;

int pivotpos(vector <int> arr,int n){
int s=0;
int e=n-1;

while(s<e){

    int mid=(s+e)/2;
    cout<<"mid:"<<mid<<"arr "<<arr[mid]<<endl;
   if(arr[mid]>=arr[s]){
         s=mid+1;
         cout<<"s"<<s<<"arr:"<<arr[s]<<endl;;
   }
   else{
    e=mid;
    cout<<"e"<<e<<"Arr:"<<arr[e]<<endl;
   }
    
}
return s;

}
int main(){

vector <int> arr={7,8,9,1,2,3,4};

cout<<pivotpos(arr,7);




}