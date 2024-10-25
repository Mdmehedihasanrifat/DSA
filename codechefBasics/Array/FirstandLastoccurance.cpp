#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> arr,int n){
int s=0;

cout<<e<<endl;
int mid;
int ans=-1;
while(s<=e){


mid=s+(e-s)/2;


if(arr[mid]==n){

  ans=mid;
  e=mid-1;
}
else if(arr[mid]>n){
e=mid-1;


}
else{
    s=mid+1;
}



}



return ans;

}












int lastOccurance(vector<int> arr,int n){
int s=0;

cout<<e<<endl;
int mid;
int ans=-1;
while(s<=e){


mid=s+(e-s)/2;


if(arr[mid]==n){

  ans=mid;
  s=mid+1;
}
else if(arr[mid]>n){
e=mid-1;


}
else{
    s=mid+1;
}



}


return ans;
}









int main(){

vector <int> arr={0,0,0,1,1,2,2,2,2};

cout<<firstOccurance(arr,2);
cout<<lastOccurance(arr,2);



}