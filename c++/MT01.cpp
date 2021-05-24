#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ull unsigned long long
void nhap(int a[][100],int &m, int n)
{
 for(int i=0;i<m*n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
void xuat(int a[][100], int m, int n)
{
 for(int i=0;i<m*n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n, m ;
    cin>>m>>n;
    int a[m][n];
   nhap(a,m,n);
   xuat(a,m,n);
	return 0;
}