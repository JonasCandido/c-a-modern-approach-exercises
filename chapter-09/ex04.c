#include <stdio.h>

int day_of_year(int month, int day, int year) {

    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = 0;

    if ((year % 4) == 0) {
        num_days[1] = 29;
    }

    int i = 0;
    while(i < (month - 1)) {
        day_count += num_days[i];
        i++;
    }

    day_count += day;
    return day_count;
}

int main() {
    printf("%d\n", day_of_year(3, 10, 2024));
    printf("%d\n", day_of_year(3, 10, 2025));
    return 0;
}