#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=-50;i<=50;i++)
{
    if(i%3==0)
    {
        cout<<"fizz";
        continue;
    }
    else if(i%5==0)
    {
        cout<<"buzz";
        continue;
    }
    else if(i%3==0 && i%5==0)
    {
        cout<<"fizzbuzz";
        continue;
    }
    cout<<i<<" ";
}
    return 0;
}