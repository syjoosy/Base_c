#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char str[1001];
    int lastCharIndex;
    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Ошибка открытия файла input.txt");
        return 1;
    }

    if (fgets(str, sizeof(str), inputFile) == NULL) {
        perror("Ошибка чтения строки");
        fclose(inputFile);
        return 1;
    }
    fclose(inputFile);

    str[strcspn(str, "\n")] = 0;

    lastCharIndex = strlen(str) - 1;
    char lastChar = str[lastCharIndex];

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия файла output.txt");
        return 1;
    }

    for (int i = 0; i < lastCharIndex; i++) {
        if (str[i] == lastChar) {
            fprintf(outputFile, "%d ", i);
        }
    }

    fclose(outputFile);
    return 0;
}