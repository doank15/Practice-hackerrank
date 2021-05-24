#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool demsont(int x)
{
    int count=0;
    if(x<2)
    {
        return false;
    }
    if(x==2)
    {
        return true;
    }
    else{
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                count++;
            }
        }
    }
    if(count>=1) 
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    ll n;int dem=0;
    cin>>n;
    assert(n>=1 && n<=10000);
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(demsont(a[i])==true)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}