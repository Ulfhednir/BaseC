#include <stdio.h>
#include <math.h>

const float PI = 3.1415926535;

double sinus(double x);

int main(void)
{
    double x;
    scanf("%lf", &x);
    x *= PI/180.0;
    printf("%.3lf\n", sinus(x));
    return 0;
}

double sinus(double x)
{
 double res = x, sum = 0.0;
 int i = 1;
 while (fabs(res) > 0.001)
 {
    sum += res;
    res *= -1.0*x*x / (2*i) / (2*i + 1);
    i++;
 }
 return sum;
}
