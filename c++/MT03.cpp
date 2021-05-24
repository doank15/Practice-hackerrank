#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ull unsigned long long
#define ll  long long
void nhap(int a[][100],int &n)
{
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void xuat(int a[][100], int n)
{
    int sum=0;
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                sum+=a[i][j];
        }
    }
    cout<<sum;
}
int main()
{
    int n ;
    cin>>n;
int a[n][100];
   nhap(a,n);
   xuat(a,n);
	return 0;
}