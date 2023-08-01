#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d;
    int n;

    printf("Enter coefficients of Quadratic Equation ax^2 + bx + c:\n");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b - 4 * a * c);

    if (d == 0)
        n = 1;
    else if (d > 0)
        n = 2;
    else
        n = 3;

    switch (n)
    {
        case 1:
            x1 = x2 = (-b) / (2 * a);
            printf("\nx1 = %f and x2 = %f\nThe roots are real and equal.", x1, x2);
            break;
        case 2:
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("\nx1 = %f and x2 = %f\nThe roots are real and unequal.", x1, x2);
            break;
        case 3:
            printf("The roots are unequal and imaginary\n");
            break;
    }

    return 0;
}
