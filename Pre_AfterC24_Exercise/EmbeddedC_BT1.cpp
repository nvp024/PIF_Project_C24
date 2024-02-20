#include <stdio.h> 
int main()
{
 int n ; 
 int number[100]; 

    do 
    {
        printf("nhap so phan tu n: ");
        scanf("%d",&n);
    } while (n < 1 || n > 16); 

    for (int i = 0 ; i < n ; i++){
        printf("\nnhap gia tri cua phan tu thu  %d: ", i ); 
        scanf("%d", &number[i]); 
    }
    for (int i = 0 ; i < n ; i++){
        printf("\nGia tri cua phan tu thu %d: ", i);
        printf("%d", number[i]); 
    }
    for (int i = 0 ; i < n ; i++){
        printf("\nDia chi cua phan tu thu %d: ", i);
        printf("%d", &number[i]); 
    }


    return 0; 
}