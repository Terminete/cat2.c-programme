#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct employee employee[3];
    int highest_salary_index=0;
    printf("Enter details for 3 employees: \n");
    for(int i=0;i<3;i++){
        printf(" \nEmployee %d\n",i+ 1);
        printf("Enter ID: ");
        scanf("%d",&employee[i].id);
        printf("Enter Name: ");
        scanf("%s ",&employee[i].name);
        printf("Enter salary: ");
        scanf("%f",&employee[i].salary);
        if(employee[i].salary>employee[highest_salary_index].salary){
            highest_salary_index=i;
        }
    }
    printf(" \nEmployee with the highest salary: \n");
    printf("id: %d\n",employee[highest_salary_index].id);
    printf("Name: %s\n",employee[highest_salary_index].name);
    printf("salary: %2f\n",employee[highest_salary_index].salary);
    return 0;
}