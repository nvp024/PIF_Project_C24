#include <stdio.h> 
#include <stdint.h>
int main()
{
 int n ; 
 int number[100]; 
    do 
    {
        printf("nhap so phan tu n: ");
        scanf("%d",&n);
    } while (n < 1 || n > 16); 

    for (int i = 0 ; i < n ; i++)
    {
        printf("\nnhap gia tri cua phan tu thu  %d: ", i ); 
        scanf("%d", &number[i]); 
    }
    int* ptr1 = &number[0];
    int* ptr2 = &number[1];
    int ele_Size = (char*)ptr2 - (char*)ptr1;
    printf("Kich thuoc cua mot phan tu trong mang la: %d byte\n", ele_Size);

/* Khai bao mang voi kieu uint8_t
 int n ; 
 uint8_t number[100]; 
    do 
    {
        printf("nhap so phan tu n: ");
        scanf("%d",&n);
    } while (n < 1 || n > 16); 

    for (int i = 0 ; i < n ; i++)
    {
        printf("\nnhap gia tri cua phan tu thu  %d: ", i ); 
        scanf("%hhu", &number[i]); 
    }
    uint8_t* ptr1 = &number[0];
    uint8_t* ptr2 = &number[1];
    int ele_Size = (char*)ptr2 - (char*)ptr1;
    printf("Kich thuoc cua mot phan tu trong mang la: %d byte\n", ele_Size);

    Tuong tu voi uint16_t ,uint32_t ,uint64_t  
    Kich thuoc cua mot phan tu trong mang khi khai bao voi kieu uint8_t la 1 byte ;
    Kich thuoc cua mot phan tu trong mang khi khai bao voi kieu uint8_t la 2 byte ;
    Kich thuoc cua mot phan tu trong mang khi khai bao voi kieu uint8_t la 4 byte ;
    Kich thuoc cua mot phan tu trong mang khi khai bao voi kieu uint8_t la 8 byte ;
*/ 
    return 0; 
}

