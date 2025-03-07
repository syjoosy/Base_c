#include <stdio.h>

int main() {
    int array[10];
    int max1, max2;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    max1 = max2 = -2147483648;

    for (int i = 0; i < 10; i++) {
        if (array[i] >= max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] >=max2 && array[i] != max1) {
            max2 = array[i];
        }
    }
    
    printf("%d\n", max1 + max2);

    return 0;
}