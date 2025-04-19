#include <stdio.h>
#include "temp_api.h"

void pop(stack *st, TemperatureData *value);

int empty_stack(stack *st);

void calculate_monthly_statistics(stack *st, int current_month) {
    float sum = 0.0;
    float max_temp = -9999.0; // Initialize to a very low value
    float min_temp = 9999.0;  // Initialize to a very high value
    int count = 0;

    // Check if the stack is empty
    if (empty_stack(st)) {
        printf("Stack is empty. No data to calculate statistics.\n");
        return;
    }

    for (int i = 0; i < st->sp; i++) 
    {
        if (st->item[i].month == current_month) 
        {
            sum += st->item[i].temperature;
            if (st->item[i].temperature > max_temp) 
            {
                max_temp = st->item[i].temperature;
            }
            if (st->item[i].temperature < min_temp) 
            {
                min_temp = st->item[i].temperature;
            }
            count++;
        }
    }

    if (count > 0) 
    {
        float average = sum / count;
        printf("Average Temperature for month %d: %.2f degrees Celsius\n", current_month, average);
        printf("Maximum Temperature for month %d: %.2f degrees Celsius\n", current_month, max_temp);
        printf("Minimum Temperature for month %d: %.2f degrees Celsius\n", current_month, min_temp);
    } 
    else 
    {
        printf("No temperature data available for month %d.\n", current_month);
    }
}

void calculate_annual_statistics(TemperatureData* data, int current_year, int size) 
{
    float average_year_temperature = 0;
    int minimum_temperature_year = 999;
    int maximum_temperature_year = -999;

    int summ_year_temperature = 0;

    int current_year_index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (data[i].year == current_year)
        {
            current_year_index++;

            summ_year_temperature += data[i].temperature;

            if (data[i].temperature < minimum_temperature_year)
            {
                minimum_temperature_year = data[i].temperature;
            }

            if (data[i].temperature > maximum_temperature_year)
            {
                maximum_temperature_year = data[i].temperature;
            }   
        }
    }

    average_year_temperature = summ_year_temperature / current_year_index;

    printf("Average year temperature: %0.2f\r\n", average_year_temperature);
    printf("Minimum year temperature: %i\r\n", minimum_temperature_year);
    printf("Maximum year temperature: %i\r\n", maximum_temperature_year);
}