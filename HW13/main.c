#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_DATA_SIZE 100

typedef struct TemperatureData {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    float temperature;
} TemperatureData;

typedef struct stack {
    TemperatureData *item;
    int size;
    int sp;
} stack;

void init_stack(stack *st) {
    st->size = 16;
    st->sp = 0;
    st->item = malloc(16 * sizeof(TemperatureData));
}

void delete_stack(stack *st) {
    free(st->item);
}

void push(stack *st, TemperatureData value) {
    if (st->sp == st->size) {
        st->size *= 2;
        st->item = realloc(st->item, st->size * sizeof(TemperatureData));
    }
    st->item[st->sp++] = value;
}

void pop(stack *st, TemperatureData *value) {
    if (st->sp < 1) {
        printf("stack empty");
        exit(1);
    }
    *value = st->item[--(st->sp)];
}

int empty_stack(stack *st) {
    return (st->sp < 1);
}

int main(int argc, char *argv[]) {
    int current_month = 0;
    int rez = 0;

    while ((rez = getopt(argc, argv, "hf:m:")) != -1) {
        switch (rez) {
            case 'h':
                printf("Program help: \n");
                printf("-h - printf program help \n");
                printf("-f - choose SCV file \n");
                printf("-m - choose current month \n");
                break;
            case 'f':
                printf("Choose CSV file: %s\n", optarg);
                break;
            case 'm':
                printf("Choosen month: %s\n", optarg);
                current_month = atoi(optarg);
                break;
            default:
                printf("Unknown argument. Try -h\n");
                break;
        }
    }

    stack st;
    init_stack(&st);

    TemperatureData tempData;

    tempData.year = 2025;
    tempData.month = 3;
    tempData.day = 30;
    tempData.hour = 19;
    tempData.minute = 13;
    tempData.temperature = 31;
    push(&st, tempData);

    tempData.year = 2025;
    tempData.month = 3;
    tempData.day = 30;
    tempData.hour = 19;
    tempData.minute = 14;
    tempData.temperature = 33;
    push(&st, tempData);

    tempData.year = 2025;
    tempData.month = 3;
    tempData.day = 30;
    tempData.hour = 19;
    tempData.minute = 15;
    tempData.temperature = 34;
    push(&st, tempData);

    
    printf("Calculate monthly statistics: \n");

    calculate_monthly_statistics2(&st, current_month);
    //calculate_annual_statistics(&st, 2025, size);

    delete_stack(&st);
    
    return 0;
}