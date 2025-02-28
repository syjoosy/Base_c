#include <stdio.h>

void toBinary(int n) {
    if (n > 1) {
        toBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;
    scanf("%d", &number);

    toBinary(number);

    return 0;
}