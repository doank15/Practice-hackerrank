#include<bits/stdc++.h>
int main()
{

int n;

    FILE *f1, *f2, *f3;
    f1=fopen("D:\\File1.txt", "r");
    f2=fopen("D:\\File2.txt", "r");
    f3=fopen("D:\\File3.txt", "w");
    while(!feof(f1))
    {
        fscanf(f1,"%d", &n);

        fprintf(f3,"%d",n);
    }
    fclose(f1);
    fprintf(f3, "\n");
    while(!feof(f2))
    {
        fscanf(f2,"%d", &n);
        fprintf(f3,"%d",n);
    }
    printf("\n");
    fclose(f2);
    fclose(f3);
    return 0;
}
