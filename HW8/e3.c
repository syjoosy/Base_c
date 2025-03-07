#include <stdio.h>

int main() {
    int array[10];
    int max, min;
    int maxIndex, minIndex;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    max = min = array[0];
    maxIndex = minIndex = 1;

    for (int i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
            maxIndex = i + 1;
        }
        
        if (array[i] < min) {
            min = array[i];
            minIndex = i + 1;
        }
    }

    printf("%d %d %d %d\n", maxIndex, max, minIndex, min);

    return 0;
}