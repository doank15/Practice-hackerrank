#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   double x;
   cin>>x;
   round(x);
   if(x>=0&& x<=1)
   {
       cout<<"0"<<" "<<"1";
   }
   else if(x<0)
   {
       cout<<(int)x-1<<" "<<(int)x;
   }
   else if(x>1)
   {
       cout<<(int) x<<" "<<(int)x+1;
   }
    return 0;
}