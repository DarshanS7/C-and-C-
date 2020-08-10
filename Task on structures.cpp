#include <stdio.h>
#include <string.h>
struct details
{
    char name [20];
    char id [20];
    float exp;
    float salary;
};
int main()
{
    struct details detail;
    printf("\n Enter the name: ");
    gets(detail.name);
    printf("\n Enter the employee id: ");
    gets(detail.id);
    printf("\n Enter the experience: ");
    scanf("%f",&detail.exp);
    printf("\n Enter the salary: ");
    scanf("%f",&detail.salary);
    printf("\n \n");
    printf("\n Name of the Employee: %s",detail.name);
    printf("\n Id of the Employee: %s",detail.id);
    printf("\n Experience of the Employee: %f",detail.exp);
    printf("\n Salary of the Employee: %f",detail.salary);
    return 0;
}
