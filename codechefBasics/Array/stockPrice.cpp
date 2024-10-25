#include <bits/stdc++.h>
using namespace std;


int main(){

int t;


cin>>t;

while (t--){
int n,k,z;
double y;

cin>>n>>k>>z>>y;


y=(n*y)/100;

double  total=n+y;
cout<<total<<endl;
if(total>=k && total <=z){
    cout<<"Yes\n";
}
else{cout<<"No\n";}


}

}