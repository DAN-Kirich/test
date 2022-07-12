#define _CRT_SECURE_NO_WARNINGS
#define PUBLIC
#define ABC 1
#include <math.h>
#include <stdio.h>

PUBLIC double scan_tops(double coordinate_top_x[], double coordinate_top_y[], int* sum_top, int* is_correct) {
    setlocale(LC_ALL, "Ukr");
    *is_correct = 0;
    char qwe;
    printf("Введіть кількість вершин многокутника : ");
    scanf("%d", &*sum_top);
    if (*sum_top <= 0)
    {
        printf("Некоректне введення кількості вершин");
        //*is_correct = 1;
        return *is_correct = ABC;
    }
    printf("Координати вершин многоугольника, розділені пробілами у форматі x+iy : ");
    for (int i = 0; i < *sum_top; i++)
    {
        scanf("%lf%lf%c", &coordinate_top_x[i], &coordinate_top_y[i], &qwe);
        if (qwe != 'i')
        {
            printf("Некоректне введення координат вершини");
            //*is_correct = 1;
            return *is_correct = ABC;
        }
    }
    coordinate_top_x[*sum_top] = coordinate_top_x[0];
    coordinate_top_y[*sum_top] = coordinate_top_y[0];
    return coordinate_top_x, coordinate_top_y, * sum_top, * is_correct;
}

PUBLIC double calculation_perimeter(double coordinate_top_x[], double coordinate_top_y[], int sum_top, double* perimetr) {

    *perimetr = 0;
    for (int i = 0; i <= sum_top; i++)
    {
        if (i == 0)
            *perimetr += *perimetr;
        else
            *perimetr += sqrt(pow(coordinate_top_x[i] - coordinate_top_x[i - 1], 2) + pow(coordinate_top_y[i] - coordinate_top_y[i - 1], 2));
    }
    return *perimetr;
}
