#include <stdio.h>

int main() {
    int array[5];
    int min;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    min = array[0];

    for (int i = 1; i < 5; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("%d", min);

    return 0;
}