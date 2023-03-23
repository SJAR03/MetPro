/*----- Colectivo de Asignatura -----*/
/* Reading and discarding characters from the input stream */

#include <stdio.h>

int main()
{
    int month1, day1, year1, month2, day2, year2;

    printf("Enter a date in the form mm-dd-yyyy: ");
    scanf("%d-%d-%d", &month1, &day1, &year1);

    printf("month=%d day=%d year=%d\n\n", month1, day1, year1);

    printf("Enter a date in the form mm/dd/yyyy: ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    printf("month=%d day=%d year=%d\n", month2, day2, year2);

    return 0;
}