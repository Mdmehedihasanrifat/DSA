#include <bits/stdc++.h>
#include <array>
using namespace std;
//
void plusMinus(vector<int> arr){

    int size =sizeof(arr);

    float Pos=0,Neg=0,Zero =0;
    size=size+1;

    for(int i=0;i<=size;i++){

        if(arr[i]>0){Pos++;}
        if(arr[i]<0){Neg++;}
        else if (arr[i]==0){ Zero++;}

    }
    float a,b,c;


    a=Pos/size;
    b=Neg/size;
    c=Zero/size;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int main() {

    vector<int> arr ={-4, 3, -9, 0, 4, 1};
    string s="hello";
    int l=s.size();
     cout<<l<<endl;

    plusMinus(arr);
}
