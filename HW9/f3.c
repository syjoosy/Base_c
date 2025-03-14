#include <stdio.h>
#include <string.h>

void count_digits(const char* number) {
    int count[10] = {0};

    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            count[number[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
}

int main() {
    char number[1001]; 

    scanf("%1000s", number);

    count_digits(number);

    return 0;
}