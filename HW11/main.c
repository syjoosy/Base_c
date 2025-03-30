#include <stdio.h>
#include "temp_api.h"

#define MAX_DATA_SIZE 100

int main() {
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

    calculate_monthly_statistics(data, size);
    calculate_annual_statistics(data, size);

    return 0;
}