#include<bits/stdc++.h>
using namespace std;
#define ll long long
void nhap(ll *a, int &n){
    for(int i=1;i<=n;i++){
        cin>>*(a+i);
    }
}
int main(){
    int n,count=0;
    //nhap n phan tu mang 
    cin>>n;
    ll a[n];
    //nhap mang 
    nhap(a,n);
    int result[count];
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=i+2;j++){
            {
               if(j<=n){
                result[count]=a[j]-a[i];
                count++;
               }
            }
        }
    }
    int max=result[0];
    for(int i=0;i<count;i++){
        if(result[i]>max){
            max=result[i];
        }
    }
    cout<<max;
    return 0;
}