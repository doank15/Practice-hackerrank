#include<iostream>
#include<cmath>
#include<cassert>
#include<iomanip>
using namespace std;
int main()
{
int  n;
do{
	cin>>n;
}while(n<1);
assert(n<=pow(10,6));
int a[n];
int max=-1000000000;
int index=0;
for(int i=0;i<n;i++)
{
	cin>>a[i];
    assert(abs(a[i]<=pow(10,9)));
    if(a[i]>=max)
    {
    	max=a[i];
     	index=i;
	}
}

cout<<index;
return 0;
}


