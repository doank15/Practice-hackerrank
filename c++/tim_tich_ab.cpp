#include<bits/stdc++.h>
#include<cassert>
using namespace std;
 int main()
 {
    int a, b;
    cin>>a>>b;
    assert(a>=-10 &&a<=10 || b>=-10 && b<=10);
if(a==0 || b==0)
{
    cout<<"0";
}
    else if(a<0)
    {
       if(b<0)
       {
           cout<<"1";
       }
       else if(b>0)
       {
           cout<<"-1";
       }
    }
    else if(a>0)
    {
        if(b>0)
        {
            cout<<"1";
        }
        else if(b<0)
        {
            cout<<"-1";
        }
    }
    

    return 0;
 }
 //PRODUCT