#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main() {
    long total_sec = 1221;
    int hour, min, sec;
    split_time(total_sec, &hour, &min, &sec);
    printf("Time: %02d:%02d:%02d\n", hour, min, sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec % 60;
}