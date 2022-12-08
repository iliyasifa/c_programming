#include "stdio.h"

int main()
{
    float salary;
    char grade;
    printf("Enter the grade: ");
    grade = getchar();

    printf("Enter your salary : ");
    scanf("%f", &salary);
    // if (grade == 'A')
    // {
    //     salary = salary * 1.50;
    // }
    // else if (grade == 'B')
    // {
    //     salary = salary * 1.35;
    // }
    // else if (grade == 'C')
    // {
    //     salary = salary * 1.25;
    // }
    // else
    // {
    //     salary = salary * 1.15;
    // }
    switch (grade)
    {
    case 'A':
        salary *= 1.35;
        break;
    case 'B':
        salary *= 1.25;
        break;
    case 'C':
        salary *= 1.15;
        break;
    default:
        salary *= 1.10;
        break;
    }
    printf("Your revised salary is %0.2f\n", salary);
}