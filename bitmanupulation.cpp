// //
// // Created by User on 1/28/2022.
// //


// #include "iostream"

// using namespace std;



// int getbit(int num,int pos){


//     return (num & (1<<pos)!=0);
// }
// int setbit(int num ,int pos){

//     return (num | (1<<pos));
// }

// int clearBit(int num,int pos){

//     int mask=~(1<<pos);

//             return (num & mask);
// }


// int updateBit(int num,int pos,int value){

//     int mask=~(1<<pos);
//     int n=num & mask;
//     return (n |(value<<pos));
// }

// int main(){


//     cout<<getbit(5,2)<<endl;
//     cout<<setbit(5,1)<<endl;

//    cout<<clearBit(7,2)<<endl;
//     cout<<updateBit(7,2,1)<<endl;


// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int md=10;
    int t;
    cin>>t;
    while(t--){
        
        int sum=0;
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        int amod=a%10;
        int bmod=b%10;
        int cmod=c%10;
        int dmod=d%10;
        
        sum=(amod+bmod+cmod+dmod);
        
        
        for(int i=1;i<=sum;i++){
            
            if(((amod+i)%bmod==(cmod+i)%dmod)){
                
                cout<<i<<endl;
                break;
            }
        }
        
    }
    return 0;
}

// void setZeros(vector<vector<int>> &matrix)
// {
// 	// Write your code here.
// 	int n=matrix.size();
// 	int m=matrix[0].size();
// int i=0;
// int j=0;
// 	for(;i<n;i++){
// 		for(;j<m;j++){

// 			if(matrix[i][j]==0){
//                  break;
// 			}
// 		}
// 	}

// 	for(int z=0;z<m;z++){
// 		matrix[i][z]=0;
// 	}
// 	for(int z=0;z<n;z++){
// 		matrix[z][j]=0;
// 	}
// }
