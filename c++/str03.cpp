#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main()
 {
  string str;
  getline(cin, str);
   int x = str.length();
  for(int j=0;j<x;j++)
  {
    if(str[j]>='A' && str[j]<='Z')
    {
      str[j]+=32;
    }
  }
  int n;
  cin>>n;
  char a[n]; 
for(int i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]>='A' && a[i]<='Z')
  {
    a[i]+=32;// nhap ki tu vao voi so luong test n
  } 
}
for(int i=0;i<n;i++) // lop so sanh ki tu 
{
  int count=0; // sau moi vong lap khoi tao lai bien count=0 
  for(int j=0;j<x;j++) // loop so sanh chuoi
   {
   if(a[i]==str[j]) // chuyen chu in hoa thanh in thuong va nguoc lai 
   {
      count++; // dem so truong hop dung
    }
    
  }
  cout<<count<<endl;
}
    return 0;
}
// STR03 - Đếm số lượng ký tự