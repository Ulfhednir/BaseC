#include <stdio.h>
#include <math.h>

const float PI = 3.1415926535;

double cosinus(double x);

int main(void)
{
    double x;
    scanf("%lf", &x);
    x *= PI/180.0;
    printf("%.3lf\n", cosinus(x));
    return 0;
}

double cosinus(double x)
{
 double res = 1, sum = 0;
 int i = 0;
 while ((fabs(res) > 0.001))
    {
    sum += res;
    i++;
    res *= -(x*x) / ((2.0 * i - 1.0) * (2.0 * i));
    }
 return sum;
}

