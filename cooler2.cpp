#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

while(n--){
int R,Y;

cin>>R>>Y;

if(Y%R==0){
cout<<(Y/R)-1<<endl;
}
else {
    cout<<(Y/R)<<endl;
}

}

}