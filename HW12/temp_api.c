#include <stdio.h>
#include "temp_api.h"

void calculate_monthly_statistics(TemperatureData* data, int current_month, int size) 
{
    float average_monthly_temperature = 0;
    int minimum_temperature_in_current_month = 999;
    int maximum_temperature_in_current_month = -999;

    int summ_monthly_temperature = 0;
    int current_month_index = 0;
    
    for (size_t i = 0; i < size; i++)
    {
        if (data[i].month == current_month)
        {
            current_month_index++;

            summ_monthly_temperature += data[i].temperature;

            if (data[i].temperature < minimum_temperature_in_current_month)
            {
                minimum_temperature_in_current_month = data[i].temperature;
            }

            if (data[i].temperature > maximum_temperature_in_current_month)
            {
                maximum_temperature_in_current_month = data[i].temperature;
            }   
        }         
    }

    average_monthly_temperature = summ_monthly_temperature / current_month_index;

    printf("Average monthly temperature: %0.2f\r\n", average_monthly_temperature);
    printf("Minimum monthly temperature: %i\r\n", minimum_temperature_in_current_month);
    printf("Maximum monthly temperature: %i\r\n", maximum_temperature_in_current_month);
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