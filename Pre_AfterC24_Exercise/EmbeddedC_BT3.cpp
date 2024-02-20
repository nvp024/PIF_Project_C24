#include <stdio.h> 
int main()
{
 int n ; 
 int number[100]; 
 int min , max ; 

    do 
    {
        printf("nhap so phan tu n: ");
        scanf("%d",&n);
    } while (n < 5); 

    for (int i = 0 ; i < n ; i++){
        printf("\nnhap gia tri cua phan tu thu  %d: ", i ); 
        scanf("%d", &number[i]); 
    }

    min = number[0]; 
    max = number[0]; 
    for (int i = 1 ; i < n ; i++)
    {
        if(min > number[i])
        {
            min = number[i];
        }
    }
    for (int i = 1 ; i < n ; i++)
    {
        if(max < number[i])
        {
            max = number[i];
        }
    }
    printf("gia tri nho nhat la: ");
    printf("%d", min); 
    printf("\ngia tri lon nhat la: ");
    printf("%d", max); 

    return 0; 
}