#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

int main(int argc, char *argv[]) {
    char *filename = NULL;
    int month = 0;
    MonthlyStats stats[12];
    int total_months = 0;

    if (argc < 2) {
        print_help();
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-f") == 0) {
            if (i + 1 < argc) {
                filename = argv[i + 1];
                i++;
            } else {
                fprintf(stderr, "No file specified after -f\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-m") == 0) {
            if (i + 1 < argc) {
                month = atoi(argv[i + 1]);
                i++;
            } else {
                fprintf(stderr, "No month specified after -m\n");
                return 1;
            }
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            return 1;
        }
    }

    if (filename == NULL) {
        fprintf(stderr, "Input file not specified\n");
        return 1;
    }

    parse_csv(filename, stats, &total_months);

    if (month > 0) {
        print_monthly_stats(stats, month);
    } else {
        print_yearly_stats(stats, total_months);
    }

    return 0;
}
