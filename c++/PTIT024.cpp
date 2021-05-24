#include<bits/stdc++.h>
#include<string>
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
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(check(i)==1)
        {
            str[i]='*';
        }
    }
    cout<<str;
    return 0;
}