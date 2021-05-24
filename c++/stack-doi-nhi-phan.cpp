#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
//funcion to convert binary
void chuyendoi(int n)
{

   ull i=0;
   ull binary[32];
   while(n>0)
   {
       binary[i]=n%2;
       n/=2;
       i++;
   }
   for(ull j=i-1;j>=0;j--)
   {
       cout<<binary[j];
   }
}
int main()
{
ull n;
cin>>n;
ull stack[n];
for(ull i=0;i<n;i++)
{
    cin>>stack[i];
}
for(ull i=0;i<n;i++)
{
    chuyendoi(stack[i]);
    cout<<endl;
    
}
    return 0;
}