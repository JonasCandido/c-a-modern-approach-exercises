#include <stdio.h>

int check(int x, int y, int n) {
    if ((n - 1 <= 0)) {
        if (((x <= 0) && (x >= n - 1)) && ((y <= 0) && (y >= n - 1))) return 1;
    }

    if ((n - 1 >= 0)) {
        if (((x >= 0) && (x <= n - 1)) && ((y >= 0) && (y <= n - 1))) return 1;
    }

    return 0;
}

int main() {
    printf("%d\n", check(0, 0, 1));
    printf("%d\n", check(1, 2, 3));
    printf("%d\n", check(-1, -2, -4));
    printf("%d\n", check(-2, -3, 2));        
    return 0;
}