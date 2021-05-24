#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>> n;
    ll a,b;
    cin>>a>>b;
    if(n%a==0 && n%b==0)
    {
        cout<<"Co, tat ca!";
    }
    else if(n%a==0 &&n%b!=0)
    {
        cout<<"Chi chia het cho "<<a<<".";
    }
    else if(n%b==0 && n%a!=0)
    {
        cout<<"Chi chia het cho "<<b<<".";
    }
    else{
        cout<<"Khong chia het cho so nao ca.";
    }

    return 0;
}