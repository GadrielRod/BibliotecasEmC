#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 13;
    int b = 3;
    int c = 4;
    printf("%3s\n", "SQRT");
    printf("%.2f\n", sqrt(900.0));
    printf("%.2f\n", sqrt(a + b *c));
    printf("%3s\n", "EXP");
    printf("%f\n", exp(1.0));
    printf("%3s\n", "log & log 10");
    printf("%f\n", log(2.718282));
    printf("%.2f\n", log10(10.0));
    printf("%3s\n", "FABS");
    printf("%.2f\n", fabs(13.5));
    printf("%.2f\n", fabs(-13.5));
    printf("%3s\n", "CEIL");
    printf("%.2f\n", ceil(9.2));
    printf("%.2f\n", ceil(-9.8));
    printf("%3s\n", "FLOOR");
    printf("%.2f\n", floor(9.2));
    printf("%.2f\n", floor(-9.8));
    printf("%3s\n", "POW");
    printf("%.2f\n", pow(2,3));
    printf("%3s\n", "FMOD");
    printf("%.2f\n", fmod(9,2));
    printf("%3s\n", "SIN");
    printf("%.2f\n", sin(0.0));
    printf("%3s\n", "COS");
    printf("%.2f\n", cos(0.0));
    printf("%3s\n", "TAN");
    printf("%.2f\n", tan(0.0));
    return 0;
}
