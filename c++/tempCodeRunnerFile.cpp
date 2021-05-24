#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin>>n>>k;
    if(n<10)
    {
        cout<<n+n/k;
    }
    else{
        cout<<n+1+n/k;
    }
    
    return 0;

}