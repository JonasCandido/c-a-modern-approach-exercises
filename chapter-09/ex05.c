#include <stdio.h>

int num_digits(int n) {
    int count = 0;

    if ((n < 0)) n = n * -1;

    while (n > 0) {
        n /= 10;
        count += 1;
    }

    return count;
}

int main() {
    printf("%d\n", num_digits(1000));
    printf("%d\n", num_digits(-1000));
    return 0;
}