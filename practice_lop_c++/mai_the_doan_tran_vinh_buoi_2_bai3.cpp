#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<"\nAnh không thể biến mùa hạ thành đông,nên cũng không thể khiến em về bên anh.Xin lỗi em thật nhiều,Sorry baby!";
            continue;
        }
        else{
            cout<<"\nHoàng xin lỗi em "<<i<<" lần";
        }
    }
    return 0;
}