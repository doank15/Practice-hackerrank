#include<bits/stdc++.h>
#include<cassert>
#define ull unsigned long long int 
#define ll long long
using namespace std;
long long ts(int a)
{
int x;
long long sum=0;
    while(a!=0)
    {
        x=a%10;
        a/=10;
        sum+=x;
    }
    return sum;
}
int main()
{
    int n;
    ull *a;
    cin>>n;
    a=new ull[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==9)
        {
            cout<<"YES"<<endl;
        }
        else if(a[i]>9)
        {
            
            if(ts(a[i])==9)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
//CD2B05