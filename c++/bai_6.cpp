#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    FILE *f;
    f=fopen("D:\\c++\\english.txt","r");
    // fgets để đọc chuỗi từ trong file ra , fputs để ghi kí tự vào file
    char str[200],*s;
        printf("%s",fgets(str,200,f));
        s=strlwr(str);
        
        for(int i=0;i<strlen(str);i++)
        {
            
            if(str[i]<'a'|| str[i]>'z')
            {
                if(str[i]==' ')
                {
                    continue;
                }
                else
                    printf("\nKhong hop le!!!");
            }
            else{
                printf("\nChuoi hop le!!!");
            }
        }
        char str1[200];
           int *x;
           x=strlen(str);
        strcpy(str1,str,x);
     
        


        /*
           for(i=0;i<count;i++)
      for(j=i+1;j<count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
        */
    return 0;
}