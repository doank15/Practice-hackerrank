#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[6][6], s=0, max=-64;
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
            s=a[i+1][j+1]; 
            /*
            explain
            i=0
            j=0
            s=a[1][1];
            */
            for(int k=0;k<3;k++)
            {
                s=s+a[i][j+k]+a[i+2][j+k];
                /*
                    k=0
                    s=s(a[1][1])+a[0][0+0]+a[0+2][0+0]
                    k=1
                    s=s+a[0][1]+a[2][1]
                    k=2
                    s=s+a[0][2]+a[2][2]

                */
            }
     if(s>max) // so sanh tong voi gia tri max xuat ra dong ho cat co tong lon nhat 
        {
            max=s;
        }
    }
    
}
cout<<max;
    return 0;
}