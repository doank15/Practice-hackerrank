    #include<bits/stdc++.h>
    using namespace std;
    long long runtest()
    {
        int n, i=2;
        cin>>n;
        long long ans=1;
        map<int,int> mp;
    while(n>1)
    {
        if(n%i==0)
        {
            mp[i]++;
            n/=i;
        }
        else{
            i++;
        }
    }
    for(auto x:mp) ans*=(pow(x.first, x.second+1)-1)/(x.first-1);

    return ans;
    }
    int main()
    {
        int test_case;
        cin>>test_case;
        while(test_case--)
        {
            cout<<runtest();
                cout<<endl;
        }
    
        return 0;
    }