#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    int B=10;

    while(t--){
      vector<string>arr(B);
        for(int i=0;i<B;i++){
            cin>>arr[i];
        }

        int total=0;


        for(int i=0;i<B;i++){
            for(int j=0;j<B;j++){
                if(arr[i][j]=='.'){
                   continue;
                }
                int minRowDist = min(i, 9 - i);  // Min distance to top or bottom
                int minColDist = min(j, 9 - j);  // Min distance to left or right

                // Calculate the score as 1 + the minimum distance
                int score = 1 + min(minRowDist, minColDist);
             
                total += score;
            }
        } 

        cout<<total<<endl;
    }
}