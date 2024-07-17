#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureRecord;

typedef struct {
    int month;
    double averageTemp;
    int minTemp;
    int maxTemp;
} MonthlyStats;

void parse_csv(const char *filename, MonthlyStats stats[], int *total_months);
void print_help();
void print_yearly_stats(const MonthlyStats stats[], int total_months);
void print_monthly_stats(const MonthlyStats stats[], int month);

#endif
