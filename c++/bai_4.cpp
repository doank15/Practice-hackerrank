#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *f;
    f= fopen("D:\\MATRIX.txt", "w");
int n, m;
printf("\nNhap so hang ");
scanf("%d", &m);
fprintf(f,"%d",m);
printf("\nNhap so cot ");
scanf("\n%d", &n);
fprintf(f, "\n%d", n);
fprintf(f, "\n");
int a[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
          scanf("%d",&a[i][j]);        
    }
}
fprintf(f,"\n");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        fprintf(f,"\t%d", a[i][j]);
    }
    fprintf(f,"\n");
}
f=fopen("D:\\MATRIX.txt","r");
fscanf(f, "%d", &m);
printf("\nSo hang: %d", m);
fscanf(f,"%d", &n);
printf("\nSo cot: %d", n);
printf("\n");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        fscanf(f,"\t%d", &a[i][j]);
        printf("\t%d", a[i][j]);
    }
printf("\n");
}
fclose(f);
    return 0;
}