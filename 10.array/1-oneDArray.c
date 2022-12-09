#include <stdio.h>
#define MAX 100

int main()
{
    int marks[MAX];
    int i, n, max, studentNumber;

    /* To get number of students */
    printf("\nEnter how many students = ");
    scanf("%d", &n);

    /* To get marks one by one */
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the mark of student-%d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    /* To get maximum mark */
    max = marks[0];
    for (i = 1; i < n; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
            studentNumber = i + 1;
        }
    }

    /* To display marks of the students */
    printf("\nYou entered the following marks : \n");
    for (i = 0; i < n; i++)
        printf("%3d  ", marks[i]);

    /* To display maximum marks of the students */
    printf("\n\nThe Student-%d is the maximum mark of %d\n\n", studentNumber, max);
}