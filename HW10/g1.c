#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char str[256];
    int length;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Ошибка открытия файла input.txt");
        return 1;
    }

    if (fgets(str, sizeof(str), inputFile) == NULL) {
        perror("Ошибка чтения строки из файла");
        fclose(inputFile);
        return 1;
    }

    fclose(inputFile);
    str[strcspn(str, "\n")] = 0;
    length = strlen(str);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия файла output.txt");
        return 1;
    }

    fprintf(outputFile, "%s, %s, %s %d\n", str, str, str, length);
    fclose(outputFile);

    return 0;
}