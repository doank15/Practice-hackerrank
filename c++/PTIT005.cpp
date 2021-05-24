#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
	ull n;
	int dem=0, i=0,x;
	cin>>n;
	while(n>0)
	{
		x=n%10;
		i++;
		if(n%x==0)
		{
			dem++;
		}
		n/=10;
	}
	if(dem==i)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}