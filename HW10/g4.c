#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 101

void find_unique_chars(const char *word1, const char *word2, char *result, int *result_count) {
    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; word1[i] != '\0'; i++) {
        count1[(unsigned char)word1[i]]++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        count2[(unsigned char)word2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[*result_count] = (char)i;
            (*result_count)++;
        }
    }
}

int compare_chars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    if (!input_file || !output_file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char word1[MAX_LEN], word2[MAX_LEN];
    fscanf(input_file, "%s %s", word1, word2);
    fclose(input_file);

    char result[256];
    int result_count = 0;

    find_unique_chars(word1, word2, result, &result_count);

    qsort(result, result_count, sizeof(char), compare_chars);

    for (int i = 0; i < result_count; i++) {
        fprintf(output_file, "%c", result[i]);
        if (i < result_count - 1) {
            fprintf(output_file, " ");
        }
    }
    fclose(output_file);

    return EXIT_SUCCESS;
}