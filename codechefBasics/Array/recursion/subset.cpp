#include<bits/stdc++.h>

using namespace std;



void printSubset(vector <int> arr,int index,vector<int> output,vector <vector <int>> &ans){

    if(index>=arr.size()){
   
   for(int i=0;i<output.size();i++){
     cout<<output[i];
   }
   cout<<endl;
    ans.push_back(output);
    return ;
}


printSubset( arr,index+1,output,ans);

int element=arr[index];

output.push_back(element);
printSubset(arr,index+1,output,ans);





}

vector <vector<int>> solve(vector <int> &arr){
vector <vector<int>> ans;
vector <int> output;
int index=0;
printSubset(arr,index,output,ans);

for(int i=0;i<ans.size();i++){

    for(int j=0;j<ans.size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}




return ans ;
}

int main(){

vector <int> arr={1,2,3};

solve(arr);


// for(int i=0;i<ans.size();i++){

//     for(int j=0;j<ans.size();j++){
//         cout<<ans[i][j];
//     }
//     cout<<endl;
// }


}