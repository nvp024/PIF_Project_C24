#include <stdio.h> 
int main()
{
 int n ; 
 int number[100]; 
 int sum ;
 float aver ;  

    do 
    {
        printf("nhap so phan tu n: ");
        scanf("%d",&n);
    } while (n < 5); 

    for (int i = 0 ; i < n ; i++)
    {
        printf("\nnhap gia tri cua phan tu thu  %d: ", i ); 
        scanf("%d", &number[i]); 
    }
    sum = 0 ; 
    for (int i = 0 ; i < n ; i++)
    {
        sum += number[i];
    }
    aver = (float)sum / n ; 
    printf("gia tri trung binh la: ");
    printf("%.3f", aver); 
    return 0; 
}