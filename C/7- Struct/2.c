#include <stdio.h>
#include <string.h>
#pragma pack(1)

 struct students{
    int IDs;
    int grades[4];
};
int main()
{
    int id;
    struct students student[10] = {{101, {84,56,94,99}}, {102, {95,96,94,100}},{103, {87,88,70,96}},{104, {83,43,96,96}},{105, {78,79,80,99}},{106, {89,46,97,91}},{107, {90,57,84,99}},{108, {88,87,56,99}},{109, {98,99,100,100}},{110, {34,56,44,75}}};
    do {
    printf("Enter your ID: ");
    scanf("%d", &id);
    } while (!(id >= 101 && id <= 110));
    printf("Your grade in Programming: %d\n", student->grades[id%101*5]);
    printf("Your grade in Data Structures: %d\n", student->grades[id%101*5+1]);
    printf("Your grade in Discrete Math: %d\n", student->grades[id%101*5+2]);
    printf("Your grade in Algorithms.: %d\n", student->grades[id%101*5+3]);
    
}
