#include<bits/stdc++.h>
using namespace std;
#define ll  long long int 
void swap(ll a[], ll n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                ll temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        int count=0;
    swap(a,n);
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           
            if(a[j]-a[i]-1>=1)
           {
               count+=(a[j]-a[i]-1);
               break;
           }
           else{
               break;
           }
       }
   }
    cout<<count;
    return 0;
}