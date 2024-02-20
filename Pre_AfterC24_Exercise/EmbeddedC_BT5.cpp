#include <stdio.h> 
#include <stdint.h>
struct infor
    {
        char    name[32] ; 
        char    mssv[8] ; 
        uint8_t course_c ; 
    };
void input_infor(struct infor* stu_infor)
{
   
    printf("Nhap vao [ten][ho] cua nguoi code: ");
    // scanf(" %s", stu_infor->name); 
    fgets(stu_infor->name, sizeof(stu_infor->name), stdin);
    printf("Nhap mssv: ");
    scanf(" %s", stu_infor->mssv); 
    printf("nhap so thu tu khoa c da tham gia: ");
    scanf("%d",&(stu_infor->course_c)); 
}
void infor_print(struct infor* stu_infor)
{
    printf("Ten : ");
    printf("%s", stu_infor->name);
    printf("MSSV: ");
    printf("%s", stu_infor->mssv);
    printf("\nKhoa : C%d", stu_infor->course_c);
}

int main()
{
    infor student;
    input_infor(&student);
    infor_print(&student);
}
