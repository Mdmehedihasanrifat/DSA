#include<bits/stdc++.h>

using namespace std;


bool isPossible(vector <int> &arr,int n, int m,int mid){

int studentCount=1;

int pageSum=0;

for(int i=0;i<n;i++){

if(pageSum+arr[i]<=mid){
pageSum+=arr[i];
}

else{

    studentCount++;
    if(studentCount>m || arr[i]>mid){
        return false;
    }
    pageSum=arr[i];
}

if(studentCount>m){return false;}

}
return true;

}


int Bookallocate(vector<int> &arr,int n ,int m){

int s=0;
int sum=0;


for(int i=0;i<n;i++){
    
    sum=sum+arr[i];}

int e =sum;


int mid=s+(e-s)/2;

int ans=-1;

while(s<=e){

if(isPossible(arr,n,m,mid)){
ans=mid;
e=mid-1;
}

else{
    s=mid+1;
}
 mid=(s+e)/2;


}

return ans;

}
int main(){
int t;

cin>>t;

while(t--){

int N,S;
cin>>N>>S;
vector<int> Arr{5};
for(int i=0;i<N;i++){
    cin>>Arr[i];
}


cout<<Bookallocate(Arr,N,S);



}




}