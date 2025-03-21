#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int N;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Ошибка открытия файла input.txt");
        return 1;
    }

    if (fscanf(inputFile, "%d", &N) != 1) {
        perror("Ошибка чтения числа из файла");
        fclose(inputFile);
        return 1;
    }
    fclose(inputFile);

    if (N % 2 != 0 || N > 26) {
        fprintf(stderr, "N должно быть четным и не превышать 26.\n");
        return 1;
    }

    char result[27];
    int evenDigitIndex = 0;
    char uppercaseLetter = 'A';

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result[i] = uppercaseLetter;
            uppercaseLetter++;
        } else {
            result[i] = ((evenDigitIndex % 4) + 1) * 2 + '0';
            evenDigitIndex++;
        }
    }
    result[N] = '\0';

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия файла output.txt");
        return 1;
    }

    fprintf(outputFile, "%s\n", result);
    fclose(outputFile);

    return 0;
}