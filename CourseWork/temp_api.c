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

void calculate_annual_statistics(stack *st)
{
    // Check if the stack is empty
    if (empty_stack(st)) {
        printf("Stack is empty. No data to calculate statistics.\n");
        return;
    }

    for (int month_number = 1; month_number <= 12; month_number++)
    {
        float sum = 0.0;
        float max_temp = -9999.0; // Initialize to a very low value
        float min_temp = 9999.0;  // Initialize to a very high value
        int count = 0; 

        for (int i = 0; i < st->sp; i++) 
        {
            if (st->item[i].month == month_number) 
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
            printf("Average Temperature for month %d: %.2f degrees Celsius\n", month_number, average);
            printf("Maximum Temperature for month %d: %.2f degrees Celsius\n", month_number, max_temp);
            printf("Minimum Temperature for month %d: %.2f degrees Celsius\n", month_number, min_temp); 
        } 
        else 
        {
            printf("No temperature data available for month %d.\n", month_number);
        }
        printf("\n");
        
    }

    
}