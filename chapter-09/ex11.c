#include <stdio.h>

float compute_GPA(char grades[], int n) {

    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        switch (grades[i]) {
            case 'a':
            case 'A':
                sum += 4;
                count++;
                break;
            case 'b':
            case 'B':
                sum += 3;
                count++;
                break;
            case 'c':
            case 'C':
                sum += 2;
                count++;
                break;
            case 'd':
            case 'D':
                sum += 1;
                count++;
                break;
            case 'f':
            case 'F':
                sum += 0;
                count++;
                break;
        }
    }

    return (sum / count);
}

int main()
{
    char grades[] = {'a', 'B', 'c', 'D', 'f'};
    printf("%.2f\n", compute_GPA(grades, 5));
    return 0;
}
