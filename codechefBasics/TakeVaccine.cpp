#include<bits/stdc++.h>


using namespace std;

int main(){



    int t;
    cin>>t;

    while (t--){

        int D,L,R;
        cin>>D>>L>>R;
        if(D>L && D<R){
            cout<<"Take second dose now"<<endl;
        }
     else if(D<L){
            cout<<"Too Early"<<endl;
        }
      else{
        cout<<"Too Late"<<endl;
      }




    }
}