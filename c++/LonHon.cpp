#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll a, b;
    int i=0;
    cin>>a>>b;
    assert(a>=1 && b>=1 &&a<=10&&b<=10);
    while(a<=b)
    {
        a*=3;
        b*=2;
        i++;
    }
cout<<i;
	return 0;
}