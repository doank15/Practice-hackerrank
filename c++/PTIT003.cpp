#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n; // do dai cua hoan vi 
cin>>n;
long long p[n];
for(int i=0;i<n-1;i++)
{
    cin>>p[i];
    for(int j=1-n;j<=n-1)
    {
        if((j-j-1)==p[i])
        {
            cout<<j
        }
    }
}

    return 0;
}