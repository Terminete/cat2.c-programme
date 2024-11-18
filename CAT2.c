#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    float salary;
    char name[25];
    char department[20];
    char email[50];
}employee;
int main(void){
    strcpy(employee.name, "John_Doe");
    strcpy(employee.department,"Human_resources");
    strcpy(employee.email, "john.doe@company.com");
    employee.id=12345;
    employee.salary=55000.50;

    printf("name: %s\n", employee.name);
    printf("department: %s\n", employee.department);
    printf("email: %s\n", employee.email);
    printf("id: %d\n" , employee.id);
    printf("salary: %f\n", employee.salary);

    return 0;

}
