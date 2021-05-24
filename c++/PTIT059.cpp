#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */cin>>a[i];
        assert(a[i]>=1);
    }
    
}
void xuat(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
 void sapxep(int a[], int &n)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 int temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
 }
 void chen(int a[], int n, int pos,int x)
 {

     for(int i=n;i>=pos;--i)
     {
         a[i]=a[i-1];
     }
     a[pos]=x;
     n++;
 }
int main()
{
    int n,x;
    cin>>n;
    int a[n];
nhap(a,n);
sapxep(a,n);
cin>>x;
assert(x>=0);
for(int i=0;i<n;i++)
{
     // xet TH cuoi va dau va giua 
    if(a[i]>=x &&i==0) // neu x nho hon tat ca cac phan tu cua mang
    {
        n++;
        for(int j=n-1;j>=i;j--)
        {
            a[j]=a[j-1];
        }
        a[i]=x;
        break;
    }
    else if(x>=a[i]&&x<=a[i+1]||a[i]<=x &&i==n-1) //neu x o giua or o cuoi mang 
    {
        chen(a,n,i+1,x);
        n++;
        break;
    }
}
xuat(a,n);
    return 0;
}