#include<iomanip>
using namespace std;
int main()
{
    long long n; 
    int sum=0;
    do{
        cin>>n;
    }while(n<0|| n>pow(10,9));
 while(n>9)
 {
     int sum=0;
     while(n!=0)
     {
         sum+=n%10;
         n/=10;
     }
     n=sum;
     
}
    cout<<n;
    return 0;
}
