
#include <iostream>
using namespace std;
int Fibonacci(int y)
{
    int a1=1, a2=1;
    if (y == 0 || y == 1)
        return 1;
    int x=2,a;
        while(x<=y)
        {
             a=a1+a2;
            a1=a2;
            a2=a;
            x++;
        }
return a;
}
int main()
{
    int n;
    cin >> n;
long long *a;
a= new long long[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(int i=0;i<n;i++)
   {
       cout<<Fibonacci(a[i])<<endl;
   }
    return 0;
}