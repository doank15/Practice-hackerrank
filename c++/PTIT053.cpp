#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool songuyento(int x)
{
    int count=0;
    if(x<2)
        return false;
    else if(x==2)
        return true;
    else if(x>2)
    {
        
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                count++;
            }
        }
        if(count==0)
            return true;
        else{
            return false;
        }
    }
}
ll tong(ll x)
{
    int sum=0;
    int dem=0;
    // 1 bien lay so  
    while(x!=0)
    {
        int a=x%10;
        sum+=a;
        x/=10;
    }
    if(songuyento(sum)==true)
    {
        return 1;
    }
    return 0;
}
int main()
{
    ll l, r; 
    cin>>l>>r;
    int s=0;
    for(int i=l+1;i<=r;i++)
    {
        if(tong(i)==1)
        {
            s++;
        }
    }
cout<<s;
    return 0;
}