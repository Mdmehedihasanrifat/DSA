#include<bits/stdc++.h>
using namespace std;
 const int N=1e4+7;
 int hsh[N];


int singleNumber(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){

           hsh[nums[i]]++;
   
      }
      for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
      }
        
    }


    int main(){



        vector<int>nums={2,2,1};
        cout<<singleNumber(nums);


        cout<<'b'-97<<endl;
    }