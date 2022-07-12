#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define size 199
#include "calculations.h"

int main()
{
    setlocale(LC_ALL, "Ukr");
    int is_correct;
    int sum_top;
    double perimetr;
    double coordinate_top_x[size];
    double coordinate_top_y[size];
    scan_tops(coordinate_top_x, coordinate_top_y, &sum_top, &is_correct);
    if (is_correct == ABC) {
        return ABC;
    }
    printf("Многокутника з кількістю вершин: %d, має периметр, який = %.3f", sum_top, calculation_perimeter(coordinate_top_x, coordinate_top_y, sum_top, &perimetr));
    return ABC;
}
