#include <iostream>
#include <string.h>
#include <stdio.h> 
using namespace std;
int main()
{
	long long n,m;
	string syb;
	int a,ans=0;
	cin>>n>>m;
	while(n--)
	{
		cin>>syb>>a;
		if(syb=="+")
		{
			if(m+a>=0)
			m+=a;
			else
			ans++;
		}
		if(syb=="-")
		{
			if(m-a>=0)
			m-=a;
			else ans++;
		}
	}
	cout<<m<<" "<<ans<<endl;
}