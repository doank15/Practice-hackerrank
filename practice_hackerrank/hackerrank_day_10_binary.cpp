#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int s=0;
    cin>>n;
    while(n!=0)
    {
        n=n&(n<<1);
        s++;
    }
    /*
    while(n>0)
    {
        remainder=n%2;
        n/=2;
    }
    xuat nguoc lai 
    */
    cout<<s; 
    return 0;
}