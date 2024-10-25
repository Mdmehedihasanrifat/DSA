// #include <bits/stdc++.h> 
// using namespace std;


// void setZeros(vector<vector<int>> &matrix)
// {
// 	// Write your code here.
// 	int n=matrix.size();
// 	int m=matrix[0].size();

//     cout<<n<<" "<<m<<endl;
// int i;
// int j;
// 	for(i=0;i<n;i++){
// 		for(j=0;j<m;j++){

// 			if(matrix[i][j]==0){
//                  break;
// 			}
// 		}
// 	}
//     cout<<i<<" "<<j<<endl;

// 	for(int z=0;z<m;z++){
// 		matrix[i][z]=0;
// 	}

// 	for(int k=0; k<n;k++){
// 		matrix[k][j]=0;
// 	}


// for (int i= 0; i< matrix.size(); i++) 
//     {
//         for (int j = 0 ;j<matrix[i].size(); j++)
//         {
//             cout << matrix[i][j] << " ";
//         }    
//         cout << endl;
//     }


// }
// // }

// int main(){

    


//     vector<vector<int>>a { {7,19,3},
//                             {1,2,0} };




//   setZeros(a);

//     //  for (int i= 0; i< a.size(); i++) 
//     // {
//     //     for (int j = 0 ;j<a[i].size(); j++)
//     //     {
//     //         cout << a[i][j] << " ";
//     //     }    
//     //     cout << endl;
//     // }


// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(int i=0; i<n;i++){
            int x;cin>>x;
            m[x]++;
            arr[i]=x;
        }
        
        
        if(n<=2){cout<<0<<endl;}
       else{ int cnt=INT_MIN;
            for(auto i:m){
                
                cnt =max(cnt,i.second);
            }
            if(cnt==1){
                cnt++;
            }
            
               cout<<n-cnt<<endl;
        }
        
     
        
        
       }
    
    
    
    
}