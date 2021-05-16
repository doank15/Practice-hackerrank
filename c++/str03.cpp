#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main()
 {
  char str[1000]=" ";
  gets(str);
  int n;
  cin>>n;
  char a[n];
  int x = strlen(str);
for(int i=0;i<n;i++)
{
  cin>>a[i];
}

for(int i=0;i<n;i++)
{
  int count=0;
  for(int j=0;j<x;j++)
  {
    
   if(a[i]==str[i])
   {
      count++;
    }
  }
  cout<<count<<endl;
}
    return 0;
}
// STR03 - Đếm số lượng ký tự