#include<bits/stdc++.h>
using namespace std;

void chen_phan_tu(float arr[], int &n, int  k)
{
    float x;
    printf("\nNhap gia tri muon chen");
    scanf("%.2f",&x);
    
    for(int i=n-1;i>k;i--)
    {
        arr[i]=arr[i-1];
    }
    n++;
     arr=(float*)realloc(arr, n*sizeof(float));
    arr[k]=x;

}
int main()
{
FILE *f,*f2;
f=fopen("D:\\input.txt", "w");
int n;
float *arr;
arr= new float[n];
scanf("%d", &n);
fprintf(f,"%d", n);
fprintf(f, "\n");
for(int i=0;i<n;i++)
{
    scanf("%f", &arr[i]);
    fprintf(f, "%.2f", arr[i]);
    fprintf(f,"\t");
}
fclose(f);
   float *x; // phan tu x
   int *k; // vi tri k
   f2=fopen("D:\\output.txt","w");
   printf("\nVi tri can chen");
   scanf("%d", &k);
   chen_phan_tu(arr,n,*k);
    for(int i=0;i<n;i++)
    {
        printf("%d", arr[i]);
        printf("\t");
    }
   arr=(float*)realloc(arr, n*sizeof(float));
  fprintf(f2, "%.2f",*x );
  fprintf(f2, "%d",*k);
  fprintf(f2,"\n");
  fprintf(f2, "%d",n);
      fprintf(f2,"\n");
      for(int i=0;i<n;i++)
      {
          fprintf(f2, "%f",arr[i]);
          fprintf(f2,"\t");
      }
    
    fclose(f2);
    return 0;
}