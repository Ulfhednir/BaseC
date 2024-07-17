#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

void parse_csv(const char *filename, MonthlyStats stats[], int *total_months) 
{
    FILE *file = fopen(filename, "r");
    if (!file) 
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char line[256];
    int current_month = 0, month_count = 0, temp_sum = 0, temp_count = 0, min_temp, max_temp;

    while (fgets(line, sizeof(line), file)) 
    {
        TemperatureRecord record;
        if (sscanf(line, "%d;%d;%d;%d;%d;%d", &record.year, &record.month, &record.day, &record.hour, &record.minute, &record.temperature) != 6) 
        {
            fprintf(stderr, "Error parsing line: %s", line);
            continue;
        }

        if (record.month != current_month) 
        {
            if (current_month != 0) 
            {
                stats[month_count].month = current_month;
                stats[month_count].averageTemp = temp_sum / (double)temp_count;
                stats[month_count].minTemp = min_temp;
                stats[month_count].maxTemp = max_temp;
                month_count++;
            }
            current_month = record.month;
            temp_sum = 0;
            temp_count = 0;
            min_temp = 100;
            max_temp = -100;
        }

        temp_sum += record.temperature;
        temp_count++;
        if (record.temperature < min_temp) min_temp = record.temperature;
        if (record.temperature > max_temp) max_temp = record.temperature;
    }

    if (temp_count > 0) 
    {
        stats[month_count].month = current_month;
        stats[month_count].averageTemp = temp_sum / (double)temp_count;
        stats[month_count].minTemp = min_temp;
        stats[month_count].maxTemp = max_temp;
        month_count++;
    }

    *total_months = month_count;
    fclose(file);
}

void print_help() 
{
    printf("Usage: report -f <file> [-m <month>]\n");
    printf("Options:\n");
    printf("  -h            Show this help message\n");
    printf("  -f <file>     Specify the input CSV file\n");
    printf("  -m <month>    Specify the month (1-12) to print statistics for\n");
}

void print_yearly_stats(const MonthlyStats stats[], int total_months) 
{
    double yearly_sum = 0;
    int yearly_count = 0;
    int yearly_min = 100;
    int yearly_max = -100;

    for (int i = 0; i < total_months; i++) 
    {
        yearly_sum += stats[i].averageTemp;
        yearly_count++;
        if (stats[i].minTemp < yearly_min) 
        {
            yearly_min = stats[i].minTemp;
        }
        if (stats[i].maxTemp > yearly_max) 
        {
            yearly_max = stats[i].maxTemp;
        }
    }

    printf("Yearly statistics:\n");
    printf("  Average temperature: %.2f\n", yearly_sum / yearly_count);
    printf("  Minimum temperature: %d\n", yearly_min);
    printf("  Maximum temperature: %d\n", yearly_max);
}

void print_monthly_stats(const MonthlyStats stats[], int month) 
{
    for (int i = 0; i < 12; i++) 
    {
        if (stats[i].month == month) 
        {
            printf("Statistics for month %d:\n", month);
            printf("  Average temperature: %.2f\n", stats[i].averageTemp);
            printf("  Minimum temperature: %d\n", stats[i].minTemp);
            printf("  Maximum temperature: %d\n", stats[i].maxTemp);
            return;
        }
    }
    printf("No data available for month %d\n", month);
}
