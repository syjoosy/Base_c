#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "temp_api.h"
#define MAX_DATA_SIZE 100

stack st;

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

#define N 3
int check_file(char *file_name)
{
    
    FILE *open;
    //char name[] = file_name;
    open = fopen(file_name, "r");
    if(open==NULL)
    {
        printf("Can't find file!\n");
        return 1;
    }
    
    int line_counter = 1;
    int Y,M,D,H,m,T,n_scan;
    while((n_scan = fscanf(open, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &m, &T)) > 0)
    {
        if (n_scan < 6)
        {
            char s[20], c;
            n_scan = fscanf(open, "%[^\n]%c", s, &c);
            printf("Wrong format in line %d\n", line_counter);
        }
        TemperatureData tempData;

        tempData.year = Y;
        tempData.month = M;
        tempData.day = D;
        tempData.hour = H;
        tempData.minute = m;
        tempData.temperature = T;
        push(&st, tempData);

        line_counter++;
    }

    fclose(open);
    return 0;

}

void print_help()
{
    printf("Program to calculate temperature statistics. Help: \n");
    printf("-h - print program help \n");
    printf("-f - choose SCV file \n");
    printf("-m - choose current month \n");
}

int main(int argc, char *argv[]) 
{
    init_stack(&st);

    int current_month = -1;
    int rez = 0;

    if (argc == 1) 
    {
        print_help();
        delete_stack(&st);
        return 1;
    }

    while ((rez = getopt(argc, argv, "hf:m:")) != -1) 
    {
        switch (rez) 
        {
            case 'h':
                print_help();
                delete_stack(&st);
                return 0;
                break;
            case 'f':
                printf("Choose CSV file: %s\n", optarg);
                int rslt = check_file(optarg);
                if (rslt == 1)
                {
                    delete_stack(&st);
                    return 1;  
                }
                break;
            case 'm':
                printf("Choosen month: %s\n", optarg);
                current_month = atoi(optarg);
                break;
            default:
                printf("Unknown argument. Try -h\n");
                delete_stack(&st);
                return 1;  
                break;
        }
    }
    
    if (current_month != -1)
    {
        printf("Calculate monthly statistics: \n");
        calculate_monthly_statistics(&st, current_month);
    }
    else
    {
        printf("Calculate annual statistics: \n");
        calculate_annual_statistics(&st);
    }
    
    

    delete_stack(&st);
    
    return 0;
}