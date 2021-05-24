/* làm việc với file cần khai báo con trỏ kiểu FILE. Việc khai báo
báo này là cần thiết để có sự kết nối giữa chương trình của bạn và tập tin mà bạn 
cần thao tác 
Example: File *fptr;


Với thao tác mở file
+) Trong ngôn ngữ lập trình C, Chúng ta có thể mở file bằng cách
dùng hàm fopen() (trong library stdio.h) 

Example: fptr = fopen("fileopen", "mode") 
mode là tham số chúng ta cần chỉ định bao gồm: 
++++++++
r: Mở dile chỉ cho phép đọc >> Nếu file không tồn tạo fopen() trả về NULL
rb: Mở file chỉ cho phép đọc dưới dạng nhị phân >> >> Nếu file không tồn tạo fopen() trả về NULL
w: Mở file chỉ cho phép ghi >> Nếu file đã tồn tại, nội dung sẽ bị ghi đè. Nếu file không tồn tại nó sẽ được tạo tự động. 
wb: Mở file cho phép viết dưới dạng nhị phân 
*/
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
