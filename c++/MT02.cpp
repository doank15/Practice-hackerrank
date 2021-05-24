#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ull unsigned long long
#define ll long long
void nhap(int a[][100],int &m, int n)
{
 for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void xuat(int a[][100], int m, int n)
{
    ll sum=0;
 for(int i=0;i<m;i++)
    {
        if(i%2!=0)
        for(int j=0;j<n;j++)
        {
           sum+=a[i][j];
        }
    }
    cout<<sum;
}
int main()
{
    int n, m ;
    cin>>m>>n;
    int a[m][100];
   nhap(a,m,n);
   xuat(a,m,n);
	return 0;
}