#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string name, phone , key;
    map<string, string>name_phone;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name>>phone; 
        name_phone[name]=phone;
    }
    while(cin>>key)
    {
        if(name_phone.find(key)!=name_phone.end())
        {
            cout<<key<<"="<<name_phone.find(key)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;

}