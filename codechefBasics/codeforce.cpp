#include <bits/stdc++.h>
using namespace std;


int  main (){



    string st;
    cin>>st;


int ans=0; 
int Max=INT_MIN;
    for (int i=0;i<st.length();i++){
      int count=0;
        if (st[i]=='0'){

            while(st[i]=='0' && i<st.length()){

                count++;
                i++;
            }
        
        }
        else {

            while(st[i]=='1' && i<st.length()){

                count++;
                i++;
            } }

         if(count>=7){ans=1;}
         i--;
     
       
        }
        if(ans==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
}