#include<bits/stdc++.h>
using namespace std;

int check(int a)
{
    int count=0;
    if(a<2)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++)

    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        return 1;
    }
    else{return 0;}
}
void sort(int a[], int n)
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
int main()
{
    int n, *a;
    cin>>n;
    assert(n<=pow(10,4));
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        assert(abs(a[i])<=pow(10,8));
    }
    sort(a,n);
    int dem[100000];
    for(int i=0;i<n;i++)
    {
        if(check(a[i])==1)
        {
            dem[a[i]]++;
        }
    }
    for(int i=0;i<=10000;i++)
    {
        if(dem[i]>=1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}