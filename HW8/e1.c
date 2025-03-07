#include <stdio.h>

int main() {
    int array[5];
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / 5.0;

    printf("%.3f", average);

    return 0;
}