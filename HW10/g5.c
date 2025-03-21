#include <stdio.h>

void replace_chars(char *str) {
    while (*str) {
        if (*str == 'a') {
            *str = 'b';
        } else if (*str == 'b') {
            *str = 'a';
        } else if (*str == 'A') {
            *str = 'B';
        } else if (*str == 'B') {
            *str = 'A';
        }
        str++;
    }
}

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    
    if (input_file == NULL) {
        perror("Ошибка открытия файла input.txt");
        return 1;
    }
    
    if (output_file == NULL) {
        perror("Ошибка открытия файла output.txt");
        fclose(input_file);
        return 1;
    }

    char str[1001];
    
    if (fgets(str, sizeof(str), input_file) != NULL) {
        replace_chars(str);
        fputs(str, output_file);
    }

    fclose(input_file);
    fclose(output_file);
    
    return 0;
}