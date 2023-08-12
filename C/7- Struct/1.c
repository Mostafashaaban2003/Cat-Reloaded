#include <stdio.h>
#include <string.h>
#pragma pack(1)
 struct employee{int salary, bonus, deductions;};
int main()
{
    struct employee e[3];
    printf("enter this information (salary,bonus,deductions) for three employees\
(Mohsen, Maged and Mariam): \n");
char *names[3] = {"Mohsen", "Maged", "Mariam"};
for(int i = 0; i < 3; i++)
{
    printf("%s: \n",names[i]);
    printf("Salary: ");
    scanf("%d", &e[i].salary);
    printf("Bonus: ");
    scanf("%d", &e[i].bonus);
    printf("Deductions: ");
    scanf("%d", &e[i].deductions);
}
for(int i = 0; i < 3; i++)
{
    printf("%s: \n",names[i]);
    printf("Salary: ");
    printf("%d\n", e[i].salary);
    printf("Bonus: ");
    printf("%d\n", e[i].bonus);
    printf("Deductions: ");
    printf("%d\n", e[i].deductions);
}
}
