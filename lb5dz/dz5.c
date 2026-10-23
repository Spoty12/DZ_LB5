#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
   
    setlocale(LC_CTYPE, "RUS");

    double x, y, z, b;

    double part1, part2, part3, part4;
    double numerator, denominator;

    printf("Введите значения: x, y, z:\n");
    scanf("%lf %lf %lf", &x, &y, &z);

    part1 = pow(y, cbrt(fabs(x)));
    part2 = pow(cos(y), 3);
    part3 = fabs(x - y);
    part4 = 1 + pow(sin(z), 2) / sqrt(x + y);
    numerator = part2 * part3 * part4;

    denominator = exp(fabs(x - y)) + x / 2.0;

    b = part1 + numerator / denominator;

    printf("\n Результат вычисления:\n");
    printf("x = %.3f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3f\n", z);

    printf("Числитель = %.6f\n", numerator);
    printf("Знаменатель = %.6f\n", denominator);

    printf("\nОтвет: b = %.4f\n", b);

    return 0;
}