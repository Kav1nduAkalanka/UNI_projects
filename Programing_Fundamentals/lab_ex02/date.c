#include <stdio.h>

int main() {
    int totalDays, years, months, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    years = totalDays/365;
    totalDays = totalDays%365;

    months = totalDays/30;
    days = totalDays%30;

    printf("Year(s): %d\n", years);
    printf("Month(s): %d\n", months);
    printf("Day(s): %d\n", days);

    return 0;
}