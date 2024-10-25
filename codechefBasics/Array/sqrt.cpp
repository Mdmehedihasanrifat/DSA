 #include<bits/stdc++.h>
 using namespace std;


 
 
 double mySqrt(int x,int p) {
        
        
        int s=0;
        int e=x;
        long long int mid;
        double ans=0;
        while(s<=e){
            
            mid=(s+e)/2;
            
            if(mid*mid==x){ans=mid;}
            else if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            
        
        }
        cout<<ans<<endl;
        float inc=1;
    for(int i=0;i<p;i++){
         inc=inc/10;
      for(double j=ans;j*j<=x;j=j+inc)
             {
                ans=j;
             }

    }
    return ans;
    }

    int main(){

     int N,p;
     cin>>N>>p;


    cout<<mySqrt(N,p);


    }