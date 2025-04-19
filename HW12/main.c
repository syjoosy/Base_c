#include <stdio.h>
#include "temp_api.h"
#include <unistd.h>
#include <stdlib.h>

#define MAX_DATA_SIZE 100

int main(int argc, char *argv[]) 
{
    // for (size_t i = 0; i < argc; i++)
    // {
    //     printf("argc = %d, argb = %s\n", i, argv[i]);
    //     char* str = argv[i];
        int current_month = 0;
        int rez=0;
        //  opterr=0;
        while ( (rez = getopt(argc,argv,"hf:m:")) != -1)
        {
            switch (rez)
            {
                case 'h': 
                    printf("Program help: \n"); 
                    printf("-h - printf program help \n");
                    printf("-f - choose SCV file \n");
                    printf("-m - choose current month \n");
                    break;
                case 'f': 
                    printf("Choose CSV file: %s\n",optarg); 
                    break;
                case 'm': 
                    printf("Choosen month: %s\n",optarg); 
                    current_month = atoi(optarg);
                    break;
                default:
                    printf("Unknown argument. Try -h\n"); 
                    break;
            };
        };


    // }
    
    TemperatureData data[MAX_DATA_SIZE];
    int size = 0;

    data[0].year = 2025;
    data[0].month = 3;
    data[0].day = 30;
    data[0].hour = 19;
    data[0].minute = 13;
    data[0].temperature = 31;

    data[1].year = 2025;
    data[1].month = 3;
    data[1].day = 30;
    data[1].hour = 19;
    data[1].minute = 14;
    data[1].temperature = 33;

    data[2].year = 2025;
    data[2].month = 3;
    data[2].day = 30;
    data[2].hour = 19;
    data[2].minute = 15;
    data[2].temperature = 34;

    data[3].year = 2025;
    data[3].month = 4;
    data[3].day = 1;
    data[3].hour = 19;
    data[3].minute = 14;
    data[3].temperature = 21;

    data[4].year = 2025;
    data[4].month = 4;
    data[4].day = 1;
    data[4].hour = 19;
    data[4].minute = 15;
    data[4].temperature = 23;

    size = 4;

    calculate_monthly_statistics(data, current_month, size);
    calculate_annual_statistics(data, 2025, size);

    return 0;
}