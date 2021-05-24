#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ull unsigned long long
#define ll long long int

	


int main()
{
	int t; // so bo test
	ull l, r; // khoang tu l den r
	cin>>t;
	for(int i=0;i<t;i++)
	{	
		ll sum=0;
		cin>>l>>r;
		assert(l<=r && l>=1);
		bool check[l+r];
		for(ll j =l;j<=r;j++)
		{
			check[j]=true;
		}
		for(ll x =l;x<=r;x++)
		{
			if(check[x]==true)
			{
				for (int y = 2 * x; y <=r; y += x) {
        				check[y] = false;
      			}
			}
		}
		for(ll u =l;u<=r;u++)
		{
			if(check[u]=true)
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}
