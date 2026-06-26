#include <stdio.h>

int main() {
    int total_days;
    int years, weeks, days;

    // Prompt user for input
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate years (ignoring leap years)
    years = total_days / 365;

    // Calculate weeks from the remaining days
    weeks = (total_days % 365) / 7;

    // Calculate the remaining days
    days = (total_days % 365) % 7;

    // Display the result
    printf("\n%d days is equal to:\n", total_days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days:  %d\n", days);

    return 0;
}