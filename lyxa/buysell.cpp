#include<bits/stdc++.h>
using namespace std;



int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int minPrice=INT_MAX;


        for(int i=0;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
        }
        return maxProfit;
    }
int main(){



    // int n;
    // cin >> n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }   
    vector<int> arr = {7, 1, 5, 3, 6, 4};

   cout<<maxProfit(arr);
}